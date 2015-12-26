/**
 * int memcmp(const void *s1, const void *s2, size_t n);
 * memcmp()用来比较s1和s2所指的内存区间的前n个字节。字符串的大小
 * 是以ASCII码表上的顺序决定的，此顺序亦为字符的值。
 * memcmp()首先将s1的第一个字符值减去s2的第一个字符值，若差值为0，则在比较
 * 下一个字符。若差值不为0，则将差值返回。
 * 例如：memcmp("Ac", "ba", 2); 返回'A'（65） - 'b'（98） = -33
 * 若s1和s2所指的内存前n个字节完全相同，则返回0值。
 *
 * 相关函数：bcmp, strcasecmp, strcmp, strcoll, strncmp, strncasecmp
 * 
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char *a = "Aa";
    char *b = "ba";
    
    int rst = memcmp(a, b, 2);
    printf("rst = %d\n", rst);
}

/**
rst = -33
**/