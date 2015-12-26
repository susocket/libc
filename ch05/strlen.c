/**
 * size_t strlen(const char *s);
 * strlen()用来记录指定的字符串s的长度，不包括结束字符'\0'
 *
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char *p1 = "good boy!";
    char *p3 = "good boy, good girl!";
    char p2[] = "good boy!";
    
    printf("strlen(p1) = %ld, sizeof(p1) = %ld\n", strlen(p1), sizeof(p1));
    printf("strlen(p2) = %ld, sizeof(p2) = %ld\n", strlen(p2), sizeof(p2));
    printf("strlen(p3) = %ld, sizeof(p3) = %ld\n", strlen(p3), sizeof(p3));
}

/**
strlen(p1) = 9, sizeof(p1) = 8
strlen(p2) = 9, sizeof(p2) = 10
strlen(p3) = 20, sizeof(p3) = 8

由此看出，sizeof()函数对数组和指针，返回结果不同，在64为系统上，sizeof(ptr)始终为8（字节）
**/