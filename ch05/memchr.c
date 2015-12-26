/**
 * void *memchr(const void *s, int c, size_t n);
 * memchr()从头开始搜寻s所指的内存前n个字节，直到发现第一个值为c的字节，返回指向该字节的指针，
 * 否则，返回0
 *
 * 相关函数：index, rindex, strchr, strpbrk, strrchr, strsep, strspn, strstr
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char *s = "12345678901234567890";
    char *p, *q;
    p = memchr(s, '5', 10);
    q = memchr(s, '9', 5);
    
    printf("p = %s\nq = %s\n", p, q);
}

/**
p = 5678901234567890
q = (null)
**/