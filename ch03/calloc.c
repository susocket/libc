/**
 * void *calloc(size_t nmemb, size_t size);
 * calloc()用来配置nmemb个相邻单位的内存，每个单位的大小为size，并返回指向第一个元素的指针。
 * 这和使用下列的方式相同：malloc(nmemb * size);
 * calloc()分配内存时会将内存初始化为0.
 *
 **/

#include <stdlib.h>
#include <stdio.h>

struct test{
    int  a[10];
    char b[20];
};

void main(){
    struct test *ptr = calloc(sizeof(struct test), 10);
    free(ptr);
}