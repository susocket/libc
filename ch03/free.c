/**
 * void free(void *ptr);
 * 参数ptr为指向由malloc()、calloc()或realloc()所返回的内存指针。
 * 调用free()后，ptr所指向的内存空间便会被回收。
 * 假若参数ptr所指项的内存空间已被回收，或是未知的内存地址，则调用free()
 * 可能会有无法预期的情况发生。若参数ptr为NULL，则free不会有作用。
 *
 **/