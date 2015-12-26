/**
 * size_t strspn(const char *s, const char *accept);
 * strspn()从参数s字符串的开头，计算连续的字符，而这些字符完全都是accept所指定的字符。
 * 简单地说，若strspn()返回数值为n，则代表字符串s开头有连续由n个字符都属于accept内的字符。
 *
 * 与strcspn()刚好相反。
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char *s1 = "Linux was first developed for x86.";
    char *t1 = "xuniLwsa";
    char *t2 = "xuniLwsa f";
    
    printf("%ld\n", strspn(s1,t1));
    printf("%ld\n", strspn(s1,t2));
}

/**
5
12
**/