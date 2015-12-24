/**
 * int munmap(void *start, size_t length);
 * munmap()用来取消参数start所指的映射内存起始地址，参数length则是欲取消的内存大小。
 * 当进程结束或利用exec相关函数执行其他程序时，映射内存会自动解除。但是关闭对应的文件描述符并不会解除映射。
 *
 * 返回值：如果成功返回0，否则返回-1并赋值errno。
 * 错误代码：EINVAL，参数start或length不合法。
 **/

