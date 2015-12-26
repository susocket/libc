/**
 * char *strpbrk(const char *s, const char *accept);
 * strpbrk()用来找出参数s字符串中最早出现在accept字符串中的任意字符。
 * 如果找到指定的字符，则返回该字符所在的内存位置，否则返回0.
 *
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char *s = "12345678901234567890";
    char *p;
    printf("%s\n", strpbrk(s, "a1 893"));
    printf("%s\n", strpbrk(s, "4398"));
    printf("%s\n", (p = strpbrk(s, "abcd")) == NULL ? "no found!" : p);
}

/**

12345678901234567890
345678901234567890
no found!

**/