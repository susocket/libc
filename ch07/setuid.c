/**
 * int setuid(uid_t uid);
 * setuid()用来重新设置执行目前进程的用户识别码。不过，要让此函数有作用，
 * 当前进程的有效用户ID（effective-userid）必须为0（root）。在Linux下，
 * 当root使用setuid()来边换成其他用户识别码后，root权限会被抛弃，完全转换
 * 成该用户身份，也就是说，该进程往后将不再具有执行setuid()的权限。
 * 如果只是想暂时抛弃root权限，且稍后想重新取得root权限，则必须使用seteuid(),
 * 而不应该使用setuid().
 *
 * 附加说明：一般编写具有setuid的程序时，为减少此类程序带来的系统安全风险，
 * 在使用完root权限后，建议马上执行setuid(getuid());来抛弃root权限。
 * 此外，进程的uid和euid不一致时，Linux系统将不再产生core dump.
 *
 **/