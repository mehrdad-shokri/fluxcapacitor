#ifndef _SCNUMS_ARM_H
#define _SCNUMS_ARM_H
/*
  Derived from kernel arch/arm/include/asm/unistd.h

  cat arch/arm/include/uapi/asm/unistd.h| \
	grep NR_SYSCALL| \
	sed 's|^#define __NR_\(\w*\).*(__NR_SYSCALL_BASE[+]\([^\)]\+\)).*$|\t[\1] = "\1",|g' \
	scnums-arm.h

 */

#define __NR_restart_syscall		  0
#define __NR_exit			  1
#define __NR_fork			  2
#define __NR_read			  3
#define __NR_write			  4
#define __NR_open			  5
#define __NR_close			  6
					/* 7 was sys_waitpid */
#define __NR_creat			  8
#define __NR_link			  9
#define __NR_unlink			 10
#define __NR_execve			 11
#define __NR_chdir			 12
					/* 13 was sys_time, not in EABI */
#define __NR_mknod			 14
#define __NR_chmod			 15
#define __NR_lchown			 16
					/* 17 was sys_break */
					/* 18 was sys_stat */
#define __NR_lseek			 19
#define __NR_getpid			 20
#define __NR_mount			 21
					/* 22 was sys_umount, not in EABI*/
#define __NR_setuid			 23
#define __NR_getuid			 24
					/* 25 was sys_stime, not in EABI */
#define __NR_ptrace			 26
					/* 27 was sys_alarm, not in EABI */
					/* 28 was sys_fstat */
#define __NR_pause			 29
					/* 30 was sys_utime, not in EABI */
					/* 31 was sys_stty */
					/* 32 was sys_gtty */
#define __NR_access			 33
#define __NR_nice			 34
					/* 35 was sys_ftime */
#define __NR_sync			 36
#define __NR_kill			 37
#define __NR_rename			 38
#define __NR_mkdir			 39
#define __NR_rmdir			 40
#define __NR_dup			 41
#define __NR_pipe			 42
#define __NR_times			 43
					/* 44 was sys_prof */
#define __NR_brk			 45
#define __NR_setgid			 46
#define __NR_getgid			 47
					/* 48 was sys_signal */
#define __NR_geteuid			 49
#define __NR_getegid			 50
#define __NR_acct			 51
#define __NR_umount2			 52
					/* 53 was sys_lock */
#define __NR_ioctl			 54
#define __NR_fcntl			 55
					/* 56 was sys_mpx */
#define __NR_setpgid			 57
					/* 58 was sys_ulimit */
					/* 59 was sys_olduname */
#define __NR_umask			 60
#define __NR_chroot			 61
#define __NR_ustat			 62
#define __NR_dup2			 63
#define __NR_getppid			 64
#define __NR_getpgrp			 65
#define __NR_setsid			 66
#define __NR_sigaction			 67
					/* 68 was sys_sgetmask */
					/* 69 was sys_ssetmask */
#define __NR_setreuid			 70
#define __NR_setregid			 71
#define __NR_sigsuspend			 72
#define __NR_sigpending			 73
#define __NR_sethostname		 74
#define __NR_setrlimit			 75
					/* 76 was sys_getrlimit, not in EABI */
#define __NR_getrusage			 77
#define __NR_gettimeofday		 78
#define __NR_settimeofday		 79
#define __NR_getgroups			 80
#define __NR_setgroups			 81
					/* 82 was sys_select, not in EABI */
#define __NR_symlink			 83
					/* 84 was sys_lstat */
#define __NR_readlink			 85
#define __NR_uselib			 86
#define __NR_swapon			 87
#define __NR_reboot			 88
					/* 89 was sys_readdir, not in EABI */
					/* 90 was sys_mmap, not in EABI */
#define __NR_munmap			 91
#define __NR_truncate			 92
#define __NR_ftruncate			 93
#define __NR_fchmod			 94
#define __NR_fchown			 95
#define __NR_getpriority		 96
#define __NR_setpriority		 97
					/* 98 was sys_profil */
#define __NR_statfs			 99
#define __NR_fstatfs			100
					/* 101 was sys_ioperm */
					/* 102 was sys_socketcall, not in EABI */
#define __NR_syslog			103
#define __NR_setitimer			104
#define __NR_getitimer			105
#define __NR_stat			106
#define __NR_lstat			107
#define __NR_fstat			108
					/* 109 was sys_uname */
					/* 110 was sys_iopl */
#define __NR_vhangup			111
					/* 112 was sys_idle */
					/* 113 was sys_syscall, not in EABI */
#define __NR_wait4			114
#define __NR_swapoff			115
#define __NR_sysinfo			116
					/* 117 was sys_ipc, not in EABI */
#define __NR_fsync			118
#define __NR_sigreturn			119
#define __NR_clone			120
#define __NR_setdomainname		121
#define __NR_uname			122
					/* 123 was sys_modify_ldt */
#define __NR_adjtimex			124
#define __NR_mprotect			125
#define __NR_sigprocmask		126
					/* 127 was sys_create_module */
#define __NR_init_module		128
#define __NR_delete_module		129
					/* 130 was sys_get_kernel_syms */
#define __NR_quotactl			131
#define __NR_getpgid			132
#define __NR_fchdir			133
#define __NR_bdflush			134
#define __NR_sysfs			135
#define __NR_personality		136
					/* 137 was sys_afs_syscall */
#define __NR_setfsuid			138
#define __NR_setfsgid			139
#define __NR__llseek			140
#define __NR_getdents			141
#define __NR__newselect			142
#define __NR_flock			143
#define __NR_msync			144
#define __NR_readv			145
#define __NR_writev			146
#define __NR_getsid			147
#define __NR_fdatasync			148
#define __NR__sysctl			149
#define __NR_mlock			150
#define __NR_munlock			151
#define __NR_mlockall			152
#define __NR_munlockall			153
#define __NR_sched_setparam		154
#define __NR_sched_getparam		155
#define __NR_sched_setscheduler		156
#define __NR_sched_getscheduler		157
#define __NR_sched_yield		158
#define __NR_sched_get_priority_max	159
#define __NR_sched_get_priority_min	160
#define __NR_sched_rr_get_interval	161
#define __NR_nanosleep			162
#define __NR_mremap			163
#define __NR_setresuid			164
#define __NR_getresuid			165
					/* 166 was sys_vm86 */
					/* 167 was sys_query_module */
#define __NR_poll			168
#define __NR_nfsservctl			169
#define __NR_setresgid			170
#define __NR_getresgid			171
#define __NR_prctl			172
#define __NR_rt_sigreturn		173
#define __NR_rt_sigaction		174
#define __NR_rt_sigprocmask		175
#define __NR_rt_sigpending		176
#define __NR_rt_sigtimedwait		177
#define __NR_rt_sigqueueinfo		178
#define __NR_rt_sigsuspend		179
#define __NR_pread64			180
#define __NR_pwrite64			181
#define __NR_chown			182
#define __NR_getcwd			183
#define __NR_capget			184
#define __NR_capset			185
#define __NR_sigaltstack		186
#define __NR_sendfile			187
					/* 188 reserved */
					/* 189 reserved */
#define __NR_vfork			190
#define __NR_ugetrlimit			191	/* SuS compliant getrlimit */
#define __NR_mmap2			192
#define __NR_truncate64			193
#define __NR_ftruncate64		194
#define __NR_stat64			195
#define __NR_lstat64			196
#define __NR_fstat64			197
#define __NR_lchown32			198
#define __NR_getuid32			199
#define __NR_getgid32			200
#define __NR_geteuid32			201
#define __NR_getegid32			202
#define __NR_setreuid32			203
#define __NR_setregid32			204
#define __NR_getgroups32		205
#define __NR_setgroups32		206
#define __NR_fchown32			207
#define __NR_setresuid32		208
#define __NR_getresuid32		209
#define __NR_setresgid32		210
#define __NR_getresgid32		211
#define __NR_chown32			212
#define __NR_setuid32			213
#define __NR_setgid32			214
#define __NR_setfsuid32			215
#define __NR_setfsgid32			216
#define __NR_getdents64			217
#define __NR_pivot_root			218
#define __NR_mincore			219
#define __NR_madvise			220
#define __NR_fcntl64			221
					/* 222 for tux */
					/* 223 is unused */
#define __NR_gettid			224
#define __NR_readahead			225
#define __NR_setxattr			226
#define __NR_lsetxattr			227
#define __NR_fsetxattr			228
#define __NR_getxattr			229
#define __NR_lgetxattr			230
#define __NR_fgetxattr			231
#define __NR_listxattr			232
#define __NR_llistxattr			233
#define __NR_flistxattr			234
#define __NR_removexattr		235
#define __NR_lremovexattr		236
#define __NR_fremovexattr		237
#define __NR_tkill			238
#define __NR_sendfile64			239
#define __NR_futex			240
#define __NR_sched_setaffinity		241
#define __NR_sched_getaffinity		242
#define __NR_io_setup			243
#define __NR_io_destroy			244
#define __NR_io_getevents		245
#define __NR_io_submit			246
#define __NR_io_cancel			247
#define __NR_exit_group			248
#define __NR_lookup_dcookie		249
#define __NR_epoll_create		250
#define __NR_epoll_ctl			251
#define __NR_epoll_wait			252
#define __NR_remap_file_pages		253
					/* 254 for set_thread_area */
					/* 255 for get_thread_area */
#define __NR_set_tid_address		256
#define __NR_timer_create		257
#define __NR_timer_settime		258
#define __NR_timer_gettime		259
#define __NR_timer_getoverrun		260
#define __NR_timer_delete		261
#define __NR_clock_settime		262
#define __NR_clock_gettime		263
#define __NR_clock_getres		264
#define __NR_clock_nanosleep		265
#define __NR_statfs64			266
#define __NR_fstatfs64			267
#define __NR_tgkill			268
#define __NR_utimes			269
#define __NR_arm_fadvise64_64		270
#define __NR_pciconfig_iobase		271
#define __NR_pciconfig_read		272
#define __NR_pciconfig_write		273
#define __NR_mq_open			274
#define __NR_mq_unlink			275
#define __NR_mq_timedsend		276
#define __NR_mq_timedreceive		277
#define __NR_mq_notify			278
#define __NR_mq_getsetattr		279
#define __NR_waitid			280
#define __NR_socket			281
#define __NR_bind			282
#define __NR_connect			283
#define __NR_listen			284
#define __NR_accept			285
#define __NR_getsockname		286
#define __NR_getpeername		287
#define __NR_socketpair			288
#define __NR_send			289
#define __NR_sendto			290
#define __NR_recv			291
#define __NR_recvfrom			292
#define __NR_shutdown			293
#define __NR_setsockopt			294
#define __NR_getsockopt			295
#define __NR_sendmsg			296
#define __NR_recvmsg			297
#define __NR_semop			298
#define __NR_semget			299
#define __NR_semctl			300
#define __NR_msgsnd			301
#define __NR_msgrcv			302
#define __NR_msgget			303
#define __NR_msgctl			304
#define __NR_shmat			305
#define __NR_shmdt			306
#define __NR_shmget			307
#define __NR_shmctl			308
#define __NR_add_key			309
#define __NR_request_key		310
#define __NR_keyctl			311
#define __NR_semtimedop			312
#define __NR_vserver			313
#define __NR_ioprio_set			314
#define __NR_ioprio_get			315
#define __NR_inotify_init		316
#define __NR_inotify_add_watch		317
#define __NR_inotify_rm_watch		318
#define __NR_mbind			319
#define __NR_get_mempolicy		320
#define __NR_set_mempolicy		321
#define __NR_openat			322
#define __NR_mkdirat			323
#define __NR_mknodat			324
#define __NR_fchownat			325
#define __NR_futimesat			326
#define __NR_fstatat64			327
#define __NR_unlinkat			328
#define __NR_renameat			329
#define __NR_linkat			330
#define __NR_symlinkat			331
#define __NR_readlinkat			332
#define __NR_fchmodat			333
#define __NR_faccessat			334
#define __NR_pselect6			335
#define __NR_ppoll			336
#define __NR_unshare			337
#define __NR_set_robust_list		338
#define __NR_get_robust_list		339
#define __NR_splice			340
#define __NR_arm_sync_file_range	341
#define __NR_sync_file_range2		__NR_arm_sync_file_range
#define __NR_tee			342
#define __NR_vmsplice			343
#define __NR_move_pages			344
#define __NR_getcpu			345
#define __NR_epoll_pwait		346
#define __NR_kexec_load			347
#define __NR_utimensat			348
#define __NR_signalfd			349
#define __NR_timerfd_create		350
#define __NR_eventfd			351
#define __NR_fallocate			352
#define __NR_timerfd_settime		353
#define __NR_timerfd_gettime		354
#define __NR_signalfd4			355
#define __NR_eventfd2			356
#define __NR_epoll_create1		357
#define __NR_dup3			358
#define __NR_pipe2			359
#define __NR_inotify_init1		360
#define __NR_preadv			361
#define __NR_pwritev			362
#define __NR_rt_tgsigqueueinfo		363
#define __NR_perf_event_open		364
#define __NR_recvmmsg			365
#define __NR_accept4			366
#define __NR_fanotify_init		367
#define __NR_fanotify_mark		368
#define __NR_prlimit64			369
#define __NR_name_to_handle_at		370
#define __NR_open_by_handle_at		371
#define __NR_clock_adjtime		372
#define __NR_syncfs			373
#define __NR_sendmmsg			374
#define __NR_setns			375
#define __NR_process_vm_readv		376
#define __NR_process_vm_writev		377
					/* 378 for kcmp */

static const char *const syscall_to_str_map[] = {
	[__NR_restart_syscall] = "restart_syscall",
	[__NR_exit] = "exit",
	[__NR_fork] = "fork",
	[__NR_read] = "read",
	[__NR_write] = "write",
	[__NR_open] = "open",
	[__NR_close] = "close",
	[__NR_creat] = "creat",
	[__NR_link] = "link",
	[__NR_unlink] = "unlink",
	[__NR_execve] = "execve",
	[__NR_chdir] = "chdir",
	[__NR_mknod] = "mknod",
	[__NR_chmod] = "chmod",
	[__NR_lchown] = "lchown",
	[__NR_lseek] = "lseek",
	[__NR_getpid] = "getpid",
	[__NR_mount] = "mount",
	[__NR_setuid] = "setuid",
	[__NR_getuid] = "getuid",
	[__NR_ptrace] = "ptrace",
	[__NR_pause] = "pause",
	[__NR_access] = "access",
	[__NR_nice] = "nice",
	[__NR_sync] = "sync",
	[__NR_kill] = "kill",
	[__NR_rename] = "rename",
	[__NR_mkdir] = "mkdir",
	[__NR_rmdir] = "rmdir",
	[__NR_dup] = "dup",
	[__NR_pipe] = "pipe",
	[__NR_times] = "times",
	[__NR_brk] = "brk",
	[__NR_setgid] = "setgid",
	[__NR_getgid] = "getgid",
	[__NR_geteuid] = "geteuid",
	[__NR_getegid] = "getegid",
	[__NR_acct] = "acct",
	[__NR_umount2] = "umount2",
	[__NR_ioctl] = "ioctl",
	[__NR_fcntl] = "fcntl",
	[__NR_setpgid] = "setpgid",
	[__NR_umask] = "umask",
	[__NR_chroot] = "chroot",
	[__NR_ustat] = "ustat",
	[__NR_dup2] = "dup2",
	[__NR_getppid] = "getppid",
	[__NR_getpgrp] = "getpgrp",
	[__NR_setsid] = "setsid",
	[__NR_sigaction] = "sigaction",
	[__NR_setreuid] = "setreuid",
	[__NR_setregid] = "setregid",
	[__NR_sigsuspend] = "sigsuspend",
	[__NR_sigpending] = "sigpending",
	[__NR_sethostname] = "sethostname",
	[__NR_setrlimit] = "setrlimit",
	[__NR_getrusage] = "getrusage",
	[__NR_gettimeofday] = "gettimeofday",
	[__NR_settimeofday] = "settimeofday",
	[__NR_getgroups] = "getgroups",
	[__NR_setgroups] = "setgroups",
	[__NR_symlink] = "symlink",
	[__NR_readlink] = "readlink",
	[__NR_uselib] = "uselib",
	[__NR_swapon] = "swapon",
	[__NR_reboot] = "reboot",
	[__NR_munmap] = "munmap",
	[__NR_truncate] = "truncate",
	[__NR_ftruncate] = "ftruncate",
	[__NR_fchmod] = "fchmod",
	[__NR_fchown] = "fchown",
	[__NR_getpriority] = "getpriority",
	[__NR_setpriority] = "setpriority",
	[__NR_statfs] = "statfs",
	[__NR_fstatfs] = "fstatfs",
	[__NR_syslog] = "syslog",
	[__NR_setitimer] = "setitimer",
	[__NR_getitimer] = "getitimer",
	[__NR_stat] = "stat",
	[__NR_lstat] = "lstat",
	[__NR_fstat] = "fstat",
	[__NR_vhangup] = "vhangup",
	[__NR_wait4] = "wait4",
	[__NR_swapoff] = "swapoff",
	[__NR_sysinfo] = "sysinfo",
	[__NR_fsync] = "fsync",
	[__NR_sigreturn] = "sigreturn",
	[__NR_clone] = "clone",
	[__NR_setdomainname] = "setdomainname",
	[__NR_uname] = "uname",
	[__NR_adjtimex] = "adjtimex",
	[__NR_mprotect] = "mprotect",
	[__NR_sigprocmask] = "sigprocmask",
	[__NR_init_module] = "init_module",
	[__NR_delete_module] = "delete_module",
	[__NR_quotactl] = "quotactl",
	[__NR_getpgid] = "getpgid",
	[__NR_fchdir] = "fchdir",
	[__NR_bdflush] = "bdflush",
	[__NR_sysfs] = "sysfs",
	[__NR_personality] = "personality",
	[__NR_setfsuid] = "setfsuid",
	[__NR_setfsgid] = "setfsgid",
	[__NR__llseek] = "_llseek",
	[__NR_getdents] = "getdents",
	[__NR__newselect] = "_newselect",
	[__NR_flock] = "flock",
	[__NR_msync] = "msync",
	[__NR_readv] = "readv",
	[__NR_writev] = "writev",
	[__NR_getsid] = "getsid",
	[__NR_fdatasync] = "fdatasync",
	[__NR__sysctl] = "_sysctl",
	[__NR_mlock] = "mlock",
	[__NR_munlock] = "munlock",
	[__NR_mlockall] = "mlockall",
	[__NR_munlockall] = "munlockall",
	[__NR_sched_setparam] = "sched_setparam",
	[__NR_sched_getparam] = "sched_getparam",
	[__NR_sched_setscheduler] = "sched_setscheduler",
	[__NR_sched_getscheduler] = "sched_getscheduler",
	[__NR_sched_yield] = "sched_yield",
	[__NR_sched_get_priority_max] = "sched_get_priority_max",
	[__NR_sched_get_priority_min] = "sched_get_priority_min",
	[__NR_sched_rr_get_interval] = "sched_rr_get_interval",
	[__NR_nanosleep] = "nanosleep",
	[__NR_mremap] = "mremap",
	[__NR_setresuid] = "setresuid",
	[__NR_getresuid] = "getresuid",
	[__NR_poll] = "poll",
	[__NR_nfsservctl] = "nfsservctl",
	[__NR_setresgid] = "setresgid",
	[__NR_getresgid] = "getresgid",
	[__NR_prctl] = "prctl",
	[__NR_rt_sigreturn] = "rt_sigreturn",
	[__NR_rt_sigaction] = "rt_sigaction",
	[__NR_rt_sigprocmask] = "rt_sigprocmask",
	[__NR_rt_sigpending] = "rt_sigpending",
	[__NR_rt_sigtimedwait] = "rt_sigtimedwait",
	[__NR_rt_sigqueueinfo] = "rt_sigqueueinfo",
	[__NR_rt_sigsuspend] = "rt_sigsuspend",
	[__NR_pread64] = "pread64",
	[__NR_pwrite64] = "pwrite64",
	[__NR_chown] = "chown",
	[__NR_getcwd] = "getcwd",
	[__NR_capget] = "capget",
	[__NR_capset] = "capset",
	[__NR_sigaltstack] = "sigaltstack",
	[__NR_sendfile] = "sendfile",
	[__NR_vfork] = "vfork",
	[__NR_ugetrlimit] = "ugetrlimit",
	[__NR_mmap2] = "mmap2",
	[__NR_truncate64] = "truncate64",
	[__NR_ftruncate64] = "ftruncate64",
	[__NR_stat64] = "stat64",
	[__NR_lstat64] = "lstat64",
	[__NR_fstat64] = "fstat64",
	[__NR_lchown32] = "lchown32",
	[__NR_getuid32] = "getuid32",
	[__NR_getgid32] = "getgid32",
	[__NR_geteuid32] = "geteuid32",
	[__NR_getegid32] = "getegid32",
	[__NR_setreuid32] = "setreuid32",
	[__NR_setregid32] = "setregid32",
	[__NR_getgroups32] = "getgroups32",
	[__NR_setgroups32] = "setgroups32",
	[__NR_fchown32] = "fchown32",
	[__NR_setresuid32] = "setresuid32",
	[__NR_getresuid32] = "getresuid32",
	[__NR_setresgid32] = "setresgid32",
	[__NR_getresgid32] = "getresgid32",
	[__NR_chown32] = "chown32",
	[__NR_setuid32] = "setuid32",
	[__NR_setgid32] = "setgid32",
	[__NR_setfsuid32] = "setfsuid32",
	[__NR_setfsgid32] = "setfsgid32",
	[__NR_getdents64] = "getdents64",
	[__NR_pivot_root] = "pivot_root",
	[__NR_mincore] = "mincore",
	[__NR_madvise] = "madvise",
	[__NR_fcntl64] = "fcntl64",
	[__NR_gettid] = "gettid",
	[__NR_readahead] = "readahead",
	[__NR_setxattr] = "setxattr",
	[__NR_lsetxattr] = "lsetxattr",
	[__NR_fsetxattr] = "fsetxattr",
	[__NR_getxattr] = "getxattr",
	[__NR_lgetxattr] = "lgetxattr",
	[__NR_fgetxattr] = "fgetxattr",
	[__NR_listxattr] = "listxattr",
	[__NR_llistxattr] = "llistxattr",
	[__NR_flistxattr] = "flistxattr",
	[__NR_removexattr] = "removexattr",
	[__NR_lremovexattr] = "lremovexattr",
	[__NR_fremovexattr] = "fremovexattr",
	[__NR_tkill] = "tkill",
	[__NR_sendfile64] = "sendfile64",
	[__NR_futex] = "futex",
	[__NR_sched_setaffinity] = "sched_setaffinity",
	[__NR_sched_getaffinity] = "sched_getaffinity",
	[__NR_io_setup] = "io_setup",
	[__NR_io_destroy] = "io_destroy",
	[__NR_io_getevents] = "io_getevents",
	[__NR_io_submit] = "io_submit",
	[__NR_io_cancel] = "io_cancel",
	[__NR_exit_group] = "exit_group",
	[__NR_lookup_dcookie] = "lookup_dcookie",
	[__NR_epoll_create] = "epoll_create",
	[__NR_epoll_ctl] = "epoll_ctl",
	[__NR_epoll_wait] = "epoll_wait",
	[__NR_remap_file_pages] = "remap_file_pages",
	[__NR_set_tid_address] = "set_tid_address",
	[__NR_timer_create] = "timer_create",
	[__NR_timer_settime] = "timer_settime",
	[__NR_timer_gettime] = "timer_gettime",
	[__NR_timer_getoverrun] = "timer_getoverrun",
	[__NR_timer_delete] = "timer_delete",
	[__NR_clock_settime] = "clock_settime",
	[__NR_clock_gettime] = "clock_gettime",
	[__NR_clock_getres] = "clock_getres",
	[__NR_clock_nanosleep] = "clock_nanosleep",
	[__NR_statfs64] = "statfs64",
	[__NR_fstatfs64] = "fstatfs64",
	[__NR_tgkill] = "tgkill",
	[__NR_utimes] = "utimes",
	[__NR_arm_fadvise64_64] = "arm_fadvise64_64",
	[__NR_pciconfig_iobase] = "pciconfig_iobase",
	[__NR_pciconfig_read] = "pciconfig_read",
	[__NR_pciconfig_write] = "pciconfig_write",
	[__NR_mq_open] = "mq_open",
	[__NR_mq_unlink] = "mq_unlink",
	[__NR_mq_timedsend] = "mq_timedsend",
	[__NR_mq_timedreceive] = "mq_timedreceive",
	[__NR_mq_notify] = "mq_notify",
	[__NR_mq_getsetattr] = "mq_getsetattr",
	[__NR_waitid] = "waitid",
	[__NR_socket] = "socket",
	[__NR_bind] = "bind",
	[__NR_connect] = "connect",
	[__NR_listen] = "listen",
	[__NR_accept] = "accept",
	[__NR_getsockname] = "getsockname",
	[__NR_getpeername] = "getpeername",
	[__NR_socketpair] = "socketpair",
	[__NR_send] = "send",
	[__NR_sendto] = "sendto",
	[__NR_recv] = "recv",
	[__NR_recvfrom] = "recvfrom",
	[__NR_shutdown] = "shutdown",
	[__NR_setsockopt] = "setsockopt",
	[__NR_getsockopt] = "getsockopt",
	[__NR_sendmsg] = "sendmsg",
	[__NR_recvmsg] = "recvmsg",
	[__NR_semop] = "semop",
	[__NR_semget] = "semget",
	[__NR_semctl] = "semctl",
	[__NR_msgsnd] = "msgsnd",
	[__NR_msgrcv] = "msgrcv",
	[__NR_msgget] = "msgget",
	[__NR_msgctl] = "msgctl",
	[__NR_shmat] = "shmat",
	[__NR_shmdt] = "shmdt",
	[__NR_shmget] = "shmget",
	[__NR_shmctl] = "shmctl",
	[__NR_add_key] = "add_key",
	[__NR_request_key] = "request_key",
	[__NR_keyctl] = "keyctl",
	[__NR_semtimedop] = "semtimedop",
	[__NR_vserver] = "vserver",
	[__NR_ioprio_set] = "ioprio_set",
	[__NR_ioprio_get] = "ioprio_get",
	[__NR_inotify_init] = "inotify_init",
	[__NR_inotify_add_watch] = "inotify_add_watch",
	[__NR_inotify_rm_watch] = "inotify_rm_watch",
	[__NR_mbind] = "mbind",
	[__NR_get_mempolicy] = "get_mempolicy",
	[__NR_set_mempolicy] = "set_mempolicy",
	[__NR_openat] = "openat",
	[__NR_mkdirat] = "mkdirat",
	[__NR_mknodat] = "mknodat",
	[__NR_fchownat] = "fchownat",
	[__NR_futimesat] = "futimesat",
	[__NR_fstatat64] = "fstatat64",
	[__NR_unlinkat] = "unlinkat",
	[__NR_renameat] = "renameat",
	[__NR_linkat] = "linkat",
	[__NR_symlinkat] = "symlinkat",
	[__NR_readlinkat] = "readlinkat",
	[__NR_fchmodat] = "fchmodat",
	[__NR_faccessat] = "faccessat",
	[__NR_pselect6] = "pselect6",
	[__NR_ppoll] = "ppoll",
	[__NR_unshare] = "unshare",
	[__NR_set_robust_list] = "set_robust_list",
	[__NR_get_robust_list] = "get_robust_list",
	[__NR_splice] = "splice",
	[__NR_arm_sync_file_range] = "arm_sync_file_range",
	[__NR_tee] = "tee",
	[__NR_vmsplice] = "vmsplice",
	[__NR_move_pages] = "move_pages",
	[__NR_getcpu] = "getcpu",
	[__NR_epoll_pwait] = "epoll_pwait",
	[__NR_kexec_load] = "kexec_load",
	[__NR_utimensat] = "utimensat",
	[__NR_signalfd] = "signalfd",
	[__NR_timerfd_create] = "timerfd_create",
	[__NR_eventfd] = "eventfd",
	[__NR_fallocate] = "fallocate",
	[__NR_timerfd_settime] = "timerfd_settime",
	[__NR_timerfd_gettime] = "timerfd_gettime",
	[__NR_signalfd4] = "signalfd4",
	[__NR_eventfd2] = "eventfd2",
	[__NR_epoll_create1] = "epoll_create1",
	[__NR_dup3] = "dup3",
	[__NR_pipe2] = "pipe2",
	[__NR_inotify_init1] = "inotify_init1",
	[__NR_preadv] = "preadv",
	[__NR_pwritev] = "pwritev",
	[__NR_rt_tgsigqueueinfo] = "rt_tgsigqueueinfo",
	[__NR_perf_event_open] = "perf_event_open",
	[__NR_recvmmsg] = "recvmmsg",
	[__NR_accept4] = "accept4",
	[__NR_fanotify_init] = "fanotify_init",
	[__NR_fanotify_mark] = "fanotify_mark",
	[__NR_prlimit64] = "prlimit64",
	[__NR_name_to_handle_at] = "name_to_handle_at",
	[__NR_open_by_handle_at] = "open_by_handle_at",
	[__NR_clock_adjtime] = "clock_adjtime",
	[__NR_syncfs] = "syncfs",
	[__NR_sendmmsg] = "sendmmsg",
	[__NR_setns] = "setns",
	[__NR_process_vm_readv] = "process_vm_readv",
	[__NR_process_vm_writev] = "process_vm_writev"
};

#endif /* _SCNUMS_ARM_H */
