/**
 * void *memset(void *s, int c, sizt_t n);
 * memset()会将参数s所指的内存区域的前n个字节以参数c填充，然后返回指向s的指针。
 * 在编写程序时，若需要将某一数组做初始化，memset()会相当方便。
 *
 * 相关函数：bzero, swab
 *
 * 注意：参数c虽然声明为int，但必须时unsigned char，所以范围在0-255之间。
 *
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char s[30];
    memset(s, 'A', sizeof(s));
    s[29] = '\0';
    printf("%s\n", s);
}