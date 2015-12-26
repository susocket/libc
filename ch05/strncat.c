/**
 * char *strncat(char *dest, const char *src, sizt_t n);
 * strcat()会将参数src字符串拷贝n个字符到参数dest所指的字符串尾。
 * 第一个参数dest要有足够的空间来容纳要拷贝的字符串。
 *
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char a[30] = "string(1)";
    char b[] = "AAAAA";
    printf("%s\n", strncat(a,b,3));
}

/**
string(1)AAA
**/