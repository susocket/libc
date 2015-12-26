/**
 * int bcmp(const void *s1, const void *s2, int n);
 * bcmp()用来比较s1和s2所指的内存区间前n个字节，若参数n为0，则返回0；
 * 若参数s1和s2所指的内存内容完全相同，则返回0， 否则返回非0.
 *
 * 建议：使用memcmp()函数代替。
 *
 * 相关函数：bcmp, strcasecmp, strcmp, strcoll, strncmp, strncasecmp
 **/

#include <string.h>
#include <stdio.h>


void main(){
    char *s1 = "good boy!";
    char *s2 = "good girl!";
    int rst;
    
    rst = bcmp(s1, s2, 5);
    printf("%d\n", rst);
}