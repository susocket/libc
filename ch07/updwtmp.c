/**
 * void updwtmp(const char *wtmp_file, cosnt struct utmp *ut);
 * updwtmp()用来将前线logwtmp()所简历的utmp结构写入到文件内。
 * 参数ut为logwtmp()建立的utmp结构数据，参数wtmp_file为欲写入的文件
 * （/var/log/wtmp)。
 **/