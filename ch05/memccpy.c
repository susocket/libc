/**
 * void *memccpy(void *dest, void *src, int c, size_t n);
 * memccpy()用来拷贝src所指的内存内容前n个字节到dest所指的地址上。
 * 与memcpy()不同的地方是，memccpy()会在复制时检查参数c是否出现，
 * 若是，返回dest中值为c的下一个字节的地址。
 *
 * 返回值：指向dest中值为c的下一个字节的指针。若没有值为c的字节，则返回0.
 *
 * 相关函数：bcopy, memcpy, memmove, strcpy, strncpy
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char a[] = "string(a)";
    char b[] = "string(b)";
    char *p;
    p = memccpy(b, a, 'g', sizeof(a));
    
    printf("b = %s\np = %s\n", b, p);
}

/**
b = string(b)
p = (b)
**/