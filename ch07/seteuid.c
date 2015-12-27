/**
 * int seteuid(uid_t euid);
 * seteuid()用来重新设置执行目前进程的有效用户识别码。在Linux下，
 * seteuid(euid)相当于setreuid(-1, euid).
 *
 **/

