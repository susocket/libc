/**
 * void tzset(void);
 * exter char *tzname[2];
 * 设置时区以供时间转换。
 * tzset()用来将环境变量TZ设给全局变量tznmae，也就是从环境变量中读取当地的时区。
 * 时间转换的函数会自动调用此函数。
 * 若环境变量TZ未设置，全局变量tzname会依照/etc/localtime找出最接近当地的时区。
 * 如果环境变量TZ的值为NULL，或者无法辨认，则使用UTC时区。
 *
 * 返回值：此函数总是调用成功，并且初始化全局变量tzname。
 **/