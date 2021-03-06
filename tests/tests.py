import functools
import unittest
import time
import os
import subprocess
import tempfile

debug = False

class TestCase(unittest.TestCase):
    def setUp(self):
        self.fcpath = os.getenv('FCPATH', None)
        assert self.fcpath is not None, "Set FCPATH environment variable first!"

    def tearDown(self):
        pass

    def do_system(self, cmd, returncode=0):
        rc = subprocess.call(cmd, shell=True)
        self.assertEqual(rc, returncode)
        return True

    def system(self, cmd, returncode=0, ignore_stderr=False, capture_stdout=False):
        if self.fcpath:
            final_cmd = "%s -- %s" % (self.fcpath, cmd)
        else:
            final_cmd = cmd
        if ignore_stderr:
            final_cmd += ' 2>/dev/null'
        if debug:
            print "debug: %r" % (final_cmd,)

        if capture_stdout:
            stdout = tempfile.TemporaryFile()
        else:
            stdout = None

        rc = subprocess.call(final_cmd, shell=True, stdout=stdout)
        self.assertEqual(rc, returncode)

        if capture_stdout:
            stdout.seek(0)
            return stdout.read()
        return True


def at_most(seconds=None):
    def decorator(fn):
        @functools.wraps(fn)
        def wrapper(self, *args, **kwargs):
            t0 = time.time()
            ret = fn(self, *args, **kwargs)
            t1 = time.time()
            td = t1 - t0
            self.assertTrue(td <= seconds,
                            "Task took %.1f, not %.1f seconds" \
                                % (td, seconds))
            return ret
        return wrapper
    return decorator


def compile(code=None):
    def decorator(fn):
        @functools.wraps(fn)
        def wrapper(self, *args, **kwargs):
            (fd, compiled) = tempfile.mkstemp()
            os.close(fd)
            (fd, source) = tempfile.mkstemp(suffix=".c")
            os.write(fd, code + '\n')
            os.close(fd)
            try:
                cc_cmd = "%s %s -Os -Wall %s -o %s" \
                    % (os.getenv('CC', 'cc'), os.getenv('CFLAGS', ''),
                       source, compiled)
                rc = subprocess.call(cc_cmd, shell=True)
                self.assertEqual(rc, 0)

                kwargs['compiled'] = compiled
                ret = fn(self, *args, **kwargs)
            finally:
                if not debug:
                    os.unlink(source)
                    os.unlink(compiled)
                else:
                    print "debug: not unlinked %s %s" % (source, compiled)
            return ret
        return wrapper
    return decorator


def savefile(text=None, suffix="txt"):
    def decorator(fn):
        @functools.wraps(fn)
        def wrapper(self, *args, **kwargs):
            (fd, compiled) = tempfile.mkstemp()
            os.close(fd)
            (fd, filename) = tempfile.mkstemp(suffix="." + suffix)
            os.write(fd, text.lstrip() + '\n')
            os.close(fd)
            try:
                kwargs['filename'] = filename
                ret = fn(self, *args, **kwargs)
            finally:
                if not debug:
                    os.unlink(filename)
                else:
                    print "debug: not unlinked %s" % (filename,)
            return ret
        return wrapper
    return decorator
