#	@(#)Makefile.inc	8.6 (Berkeley) 5/4/95
# $FreeBSD: head/lib/libc/gen/Makefile.inc 214680 2010-11-02 17:00:56Z ed $

# machine-independent gen sources
.PATH: ${.CURDIR}/../libc/${MACHINE_ARCH}/gen ${.CURDIR}/../libc/gen

CFLAGS+=-I${.CURDIR}/../libc/sysvipc

CMAPS+=	${.CURDIR}/gen/Symbol.map

SRCS+=  __errno_location.c _once_stub.c _pthread_stubs.c _rand48.c \
	_spinlock_stub.c _thread_init.c \
	alarm.c arc4random.c assert.c basename.c \
	clock.c clock_getcpuclockid.c closedir.c confstr.c creat.c \
	ctermid.c daemon.c devname.c dirfd.c dirname.c disklabel.c disktab.c \
	dlfcn.c drand48.c dup3.c elf_utils.c erand48.c err.c errlst.c exec.c \
	fdevname.c fmtcheck.c fmtmsg.c fnmatch.c fpclassify.c \
	frexp.c fstab.c ftok.c fts.c ftw.c getbootfile.c getbsize.c \
	getcap.c getcwd.c getdevpath.c getdomainname.c \
	getentropy.c \
	getgrent.c getgrouplist.c gethostid.c gethostname.c \
	getloadavg.c getlogin.c getmntinfo.c getmntvinfo.c \
	getnetgrent.c getobjformat.c getosreldate.c getpagesize.c \
	getpeereid.c getprogname.c getpwent.c getttyent.c \
	getusershell.c getvfsbyname.c getvfsent.c glob.c \
	initgroups.c isatty.c isinf.c isfinite.c isnan.c isnormal.c \
	jrand48.c killpg.c lcong48.c ldexp.c libc_dlopen.c \
	lockf.c lrand48.c modf.c mrand48.c sysvipc_msgctl.c \
	sysvipc_msgget.c sysvipc_msgrcv.c sysvipc_msgsnd.c nftw.c nice.c \
	nlist.c nrand48.c ntp_gettime.c opendir.c \
	pause.c pmadvise.c popen.c posix_spawn.c posixshm.c \
	psignal.c pw_scan.c pwcache.c \
	raise.c readdir.c readpassphrase.c rewinddir.c ovsbrk.c signbit.c \
	sysvipc.c sysvipc_shmget.c sysvipc_shmctl.c \
	sysvipc_shmdt.c sysvipc_shmat.c\
	scandir.c seed48.c seekdir.c sysvipc_semctl.c sysvipc_semget.c sysvipc_semop.c \
	setdomainname.c sethostname.c setjmperr.c setmode.c setprogname.c \
	setproctitle.c \
	siginterrupt.c siglist.c signal.c \
	sigsetops.c sigwait.c sleep.c srand48.c \
	stringlist.c strtofflags.c sysconf.c sysctl.c sysctlbyname.c \
	sysctlnametomib.c syslog.c telldir.c termios.c time.c times.c \
	ttyname.c ttyslot.c \
	ualarm.c ucontext.c ulimit.c uname.c unvis.c usleep.c utime.c \
	utmp.c utmpx.c \
	valloc.c vis.c wait.c wait3.c waitpid.c waitid.c wordexp.c

.if ${LIB} != {c_rtld}
SRCS+=	tls.c
.endif

# machine-dependent gen sources
.include "${.CURDIR}/../libc/${MACHINE_ARCH}/gen/Makefile.inc"

MAN+=	alarm.3 arc4random.3 clock.3 \
	basename.3 \
	clock_getcpuclockid.3 confstr.3 creat.3 ctermid.3 daemon.3 \
	devname.3 directory.3 dirname.3 \
	dladdr.3 dlinfo.3 dlopen.3 \
	dlclose.3 dlerror.3 dlfcn.3 dlsym.3 dlvsym.3 dl_iterate_phdr.3 dup3.3 \
	endutxent.3 err.3 exec.3 \
	fmtcheck.3 fmtmsg.3 fnmatch.3 frexp.3 ftok.3 fts.3 ftw.3 \
	getbootfile.3 getbsize.3 getcap.3 getcontext.3 getcwd.3 \
	getdevpath.3 getdiskbyname.3 getdisktabbyname.3 getdomainname.3 \
	getentropy.3 getfsent.3 getgrent.3 getgrouplist.3 \
	gethostid.3 gethostname.3 getlastlogx.3 getloadavg.3 \
	getmntinfo.3 getnetgrent.3 getobjformat.3 getosreldate.3 \
	getpagesize.3 getpass.3 getpeereid.3 getprogname.3 getpwent.3 \
	getttyent.3 getusershell.3 getvfsbyname.3 getvfsent.3 \
	glob.3 initgroups.3 isgreater.3 killpg.3 \
	ldexp.3 lockf.3 makecontext.3 makecontext_quick.3 modf.3 \
	nice.3 nlist.3 pause.3 popen.3 posix_spawn.3 \
	posix_spawn_file_actions_addopen.3 posix_spawn_file_actions_init.3 \
	posix_spawnattr_getflags.3 posix_spawnattr_getpgroup.3 \
	posix_spawnattr_getschedparam.3 posix_spawnattr_getschedpolicy.3 \
	posix_spawnattr_getsigdefault.3 posix_spawnattr_getsigmask.3 \
	posix_spawnattr_init.3 psignal.3 pwcache.3 \
	raise.3 rand48.3 readpassphrase.3 rfork_thread.3 \
	scandir.3 setjmp.3 setmode.3 setproctitle.3 shm_open.3 \
	siginterrupt.3 signal.3 sigsetops.3 sleep.3 stringlist.3 \
	strtofflags.3 sysconf.3 sysctl.3 syslog.3 tcgetpgrp.3 tcgetsid.3 \
	tcsendbreak.3 tcsetattr.3 tcsetpgrp.3 tcsetsid.3 time.3 times.3 \
	ttyname.3 tzset.3 ualarm.3 \
	ucontext.3 ulimit.3 uname.3 unvis.3 usleep.3 utime.3 \
	valloc.3 vis.3 wordexp.3

MLINKS+=arc4random.3 arc4random_addrandom.3 \
	arc4random.3 arc4random_buf.3 \
	arc4random.3 arc4random_stir.3 \
	arc4random.3 arc4random_uniform.3
MLINKS+=ctermid.3 ctermid_r.3
MLINKS+=devname.3 devname_r.3 \
	devname.3 fdevname.3 \
	devname.3 fdevname_r.3
MLINKS+=directory.3 closedir.3 \
	directory.3 dirfd.3 \
	directory.3 fdopendir.3 \
	directory.3 opendir.3 \
	directory.3 readdir.3 \
	directory.3 readdir_r.3 \
	directory.3 rewinddir.3 \
	directory.3 seekdir.3 \
	directory.3 telldir.3
MLINKS+=dlopen.3 fdlopen.3
MLINKS+=dlsym.3 dlfunc.3
MLINKS+=endutxent.3 getutxent.3 \
	endutxent.3 getutxid.3 \
	endutxent.3 getutxline.3 \
	endutxent.3 getutxuser.3 \
	endutxent.3 pututxline.3 \
	endutxent.3 setutxdb.3 \
	endutxent.3 setutxent.3
MLINKS+=err.3 errc.3 \
	err.3 err_set_exit.3 \
	err.3 err_set_file.3 \
	err.3 errx.3 \
	err.3 verr.3 \
	err.3 verrc.3 \
	err.3 verrx.3 \
	err.3 vwarn.3 \
	err.3 vwarnc.3 \
	err.3 vwarnx.3 \
	err.3 warn.3 \
	err.3 warnc.3 \
	err.3 warnx.3
MLINKS+=exec.3 execl.3 \
	exec.3 execle.3 \
	exec.3 execlp.3 \
	exec.3 exect.3 \
	exec.3 execv.3 \
	exec.3 execvp.3 \
	exec.3 execvP.3
MLINKS+=frexp.3 frexpf.3 \
	frexp.3 frexpl.3
MLINKS+=fts.3 fts_children.3 \
	fts.3 fts_close.3 \
	fts.3 fts_get_clientptr.3 \
	fts.3 fts_get_stream.3 \
	fts.3 fts_open.3 \
	fts.3 fts_read.3 \
	fts.3 fts_set.3 \
	fts.3 fts_set_clientptr.3
MLINKS+=ftw.3 nftw.3
MLINKS+=getcap.3 cgetcap.3 \
	getcap.3 cgetclose.3 \
	getcap.3 cgetent.3 \
	getcap.3 cgetfirst.3 \
	getcap.3 cgetmatch.3 \
	getcap.3 cgetnext.3 \
	getcap.3 cgetnum.3 \
	getcap.3 cgetset.3 \
	getcap.3 cgetstr.3 \
	getcap.3 cgetustr.3
MLINKS+=getcontext.3 setcontext.3
MLINKS+=getcwd.3 getwd.3
MLINKS+=getdomainname.3 setdomainname.3
MLINKS+=getfsent.3 endfsent.3 \
	getfsent.3 getfsfile.3 \
	getfsent.3 getfsspec.3 \
	getfsent.3 getfstab.3 \
	getfsent.3 getfstype.3 \
	getfsent.3 setfsent.3 \
	getfsent.3 setfstab.3
MLINKS+=getgrent.3 endgrent.3 \
	getgrent.3 getgrent_r.3 \
	getgrent.3 getgrgid.3 \
	getgrent.3 getgrgid_r.3 \
	getgrent.3 getgrnam.3 \
	getgrent.3 getgrnam_r.3 \
	getgrent.3 setgrent.3 \
	getgrent.3 setgroupent.3
MLINKS+=gethostid.3 sethostid.3
MLINKS+=gethostname.3 sethostname.3
MLINKS+=getlastlogx.3 updlastlogx.3 \
	getlastlogx.3 _updwtmpx.3 \
	getlastlogx.3 updwtmpx.3 \
	getlastlogx.3 utmpxname.3
MLINKS+=getmntinfo.3 getmntvinfo.3
MLINKS+=getnetgrent.3 endnetgrent.3 \
	getnetgrent.3 innetgr.3 \
	getnetgrent.3 setnetgrent.3
MLINKS+=getprogname.3 setprogname.3
MLINKS+=getpwent.3 endpwent.3 \
	getpwent.3 getpwent_r.3 \
	getpwent.3 getpwnam.3 \
	getpwent.3 getpwnam_r.3 \
	getpwent.3 getpwuid.3 \
	getpwent.3 getpwuid_r.3 \
	getpwent.3 setpassent.3 \
	getpwent.3 setpwent.3 \
	getpwent.3 setpwfile.3
MLINKS+=getttyent.3 endttyent.3 \
	getttyent.3 getttynam.3 \
	getttyent.3 isdialuptty.3 \
	getttyent.3 isnettty.3 \
	getttyent.3 setttyent.3
MLINKS+=getusershell.3 endusershell.3 \
	getusershell.3 setusershell.3
MLINKS+=getvfsent.3 endvfsent.3 \
	getvfsent.3 setvfsent.3 \
	getvfsent.3 vfsisloadable.3 \
	getvfsent.3 vfsload.3
MLINKS+=glob.3 globfree.3
MLINKS+=isgreater.3 isgreaterequal.3 \
	isgreater.3 isless.3 \
	isgreater.3 islessequal.3 \
	isgreater.3 islessgreater.3 \
	isgreater.3 isunordered.3
MLINKS+=ldexp.3 ldexpf.3 \
	ldexp.3 ldexpl.3
MLINKS+=makecontext.3 swapcontext.3
MLINKS+=makecontext_quick.3 setcontext_quick.3 \
	makecontext_quick.3 swapcontext_quick.3
MLINKS+=modf.3 modff.3 \
	modf.3 modfl.3
MLINKS+=popen.3 pclose.3
MLINKS+=posix_spawn.3 posix_spawnp.3
MLINKS+=posix_spawn_file_actions_addopen.3 posix_spawn_file_actions_addclose.3 \
	posix_spawn_file_actions_addopen.3 posix_spawn_file_actions_adddup2.3
MLINKS+=posix_spawn_file_actions_init.3 posix_spawn_file_actions_destroy.3
MLINKS+=posix_spawnattr_getflags.3 posix_spawnattr_setflags.3
MLINKS+=posix_spawnattr_getpgroup.3 posix_spawnattr_setpgroup.3
MLINKS+=posix_spawnattr_getschedparam.3 posix_spawnattr_setschedparam.3
MLINKS+=posix_spawnattr_getschedpolicy.3 posix_spawnattr_setschedpolicy.3
MLINKS+=posix_spawnattr_getsigdefault.3 posix_spawnattr_setsigdefault.3
MLINKS+=posix_spawnattr_getsigmask.3 posix_spawnattr_setsigmask.3
MLINKS+=posix_spawnattr_init.3 posix_spawnattr_destroy.3
MLINKS+=psignal.3 psiginfo.3 \
	psignal.3 strsignal.3 \
	psignal.3 sys_nsig.3 \
	psignal.3 sys_siglist.3 \
	psignal.3 sys_signame.3
MLINKS+=pwcache.3 gid_from_group.3 \
	pwcache.3 group_from_gid.3 \
	pwcache.3 pwcache_groupdb.3 \
	pwcache.3 pwcache_userdb.3 \
	pwcache.3 uid_from_user.3 \
	pwcache.3 user_from_uid.3
MLINKS+=rand48.3 drand48.3 \
	rand48.3 erand48.3 \
	rand48.3 jrand48.3 \
	rand48.3 lcong48.3 \
	rand48.3 lrand48.3 \
	rand48.3 mrand48.3 \
	rand48.3 nrand48.3 \
	rand48.3 seed48.3 \
	rand48.3 srand48.3
MLINKS+=scandir.3 alphasort.3
MLINKS+=setjmp.3 _longjmp.3 \
	setjmp.3 longjmp.3 \
	setjmp.3 longjmperr.3 \
	setjmp.3 longjmperror.3 \
	setjmp.3 _setjmp.3 \
	setjmp.3 siglongjmp.3 \
	setjmp.3 sigsetjmp.3
MLINKS+=setmode.3 getmode.3
MLINKS+=shm_open.3 shm_unlink.3
MLINKS+=sigsetops.3 sigaddset.3 \
	sigsetops.3 sigdelset.3 \
	sigsetops.3 sigemptyset.3 \
	sigsetops.3 sigfillset.3 \
	sigsetops.3 sigismember.3
MLINKS+=stringlist.3 sl_add.3 \
	stringlist.3 sl_find.3 \
	stringlist.3 sl_free.3 \
	stringlist.3 sl_init.3
MLINKS+=strtofflags.3 fflagstostr.3
MLINKS+=sysctl.3 sysctlbyname.3 \
	sysctl.3 sysctlnametomib.3
MLINKS+=syslog.3 closelog.3 \
	syslog.3 openlog.3 \
	syslog.3 setlogmask.3 \
	syslog.3 vsyslog.3
MLINKS+=tcsendbreak.3 tcdrain.3 \
	tcsendbreak.3 tcflow.3 \
	tcsendbreak.3 tcflush.3
MLINKS+=tcsetattr.3 cfgetispeed.3 \
	tcsetattr.3 cfgetospeed.3 \
	tcsetattr.3 cfmakeraw.3 \
	tcsetattr.3 cfmakesane.3 \
	tcsetattr.3 cfsetispeed.3 \
	tcsetattr.3 cfsetospeed.3 \
	tcsetattr.3 cfsetspeed.3 \
	tcsetattr.3 tcgetattr.3
MLINKS+=ttyname.3 isatty.3 \
	ttyname.3 ttyname_r.3
MLINKS+=tzset.3 tzsetwall.3
MLINKS+=unvis.3 strnunvis.3 \
	unvis.3 strnunvisx.3 \
	unvis.3 strunvis.3 \
	unvis.3 strunvisx.3
MLINKS+=vis.3 nvis.3 \
	vis.3 snvis.3 \
	vis.3 stravis.3 \
	vis.3 strenvisx.3 \
	vis.3 strnvis.3 \
	vis.3 strnvisx.3 \
	vis.3 strsenvisx.3 \
	vis.3 strsnvis.3 \
	vis.3 strsnvisx.3 \
	vis.3 strsvis.3 \
	vis.3 strsvisx.3 \
	vis.3 strvis.3 \
	vis.3 strvisx.3 \
	vis.3 svis.3
MLINKS+=wordexp.3 wordfree.3
