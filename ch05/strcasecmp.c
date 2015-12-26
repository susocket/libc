/**
 * int strcasecmp(const char *s1, constr char *s2);
 * strcasecmp()用来比较参数s1和s2字符串，比较时会忽略大小写的差异。
 *
 * 相关函数：bcmp,memcmp, strcmp, strcoll, strncmp, strncasecmp
 *
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char *a = "abCDE";
    char *b = "ABcde";
    
    printf("%d\n", strcasecmp(a,b));
}

/**
 * 0
 **/