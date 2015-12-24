/**
 * int settimeofday(const struct timeval *tv, const struct timezone *tz);
 * settimeofday()会把当前时间设置成由tv所指的结构信息，当地时区的信息则设置tz所指的结构。
 * 只有root权限才能使用此函数修改时间。
 **/