/**
 * size_t strcspn(const char *s, const char *reject);
 * strcspn()从参数s字符串的开头计算连续的字符，而这些字符完全不再参数
 * reject所指定的字符串中。简单地说，若strcspn()返回的值为n，则代表字符串
 * s开头连续有n个字符都不包含在字符串reject内的字符。
 *
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char *str = "Linux was first developed for 386/486_based PCs";
    printf("%ld\n", strcspn(str, " "));
    printf("%ld\n", strcspn(str, "/_"));
}