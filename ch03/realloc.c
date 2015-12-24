/**
 * void realloc(void *ptr, sizet_t size);
 * 更改已配置的内存空间。
 * 参数：
 *      ptr：指向先前由malloc()、calloc()或realloc()所返回的内存指针；
 *      size：新配置的内存大小，其值可以原内存大，也可以比原内存小。
 * 若参数size的值较原分配的内存空间小，内存内容并不会改变，且返回的指针为原来的内存地址；
 * 若参数size的值比原分配的内存空间大，则realloc()不一定返回原来的指针，原先的内容虽然未改变，
 * 但多出的内存则没有赋初值。
 * 若ptr指针为NULL，此调用相当于malloc(size）；
 * 若参数size值为0，此调用相当于free(ptr);
 *
 * 返回值：配置成功，返回一指针，失败返回NULL。
 *
 **/

#include <stdlib.h>
#include <stdio.h>

void main(){
    char *ptr1 = malloc(10);
    char *ptr2;
    
    memset(ptr1, 'A', 10);
    // beware!!! it's dangerous!
    *(ptr1+10) = '\0';
    printf("before realloc: ptr = %x [%s]\n", ptr1, ptr1);
    ptr2 = realloc(ptr1, 40960);
    printf("after realloc: ptr = %x [%s]\n", ptr2, ptr2);
    
}

/**
before realloc: ptr = ae8010 [AAAAAAAAAA]
after realloc: ptr = ae8010 [AAAAAAAAAA]
**/