/**
 * void utmpname(const char *file);
 * 用来设置utmp文件的路径，以提供utmp相关函数的存取路径。
 * 如果没有使用utmpname()，则默认utmp文件的路径为：
 * /var/run/utmp.
 *
 **/