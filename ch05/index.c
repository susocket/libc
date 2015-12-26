/**
 * char *index(const char *s, int c);
 * index()用来找出参数s中第一个出现的参数c地址，然后将该地址返回。字符串结束符NULL也视为字符串一部分。
 * 另外还有rindex()函数，与之类似。
 *
 * 返回值：如果找到指定的字符，则返回该字符所在的位置，否则返回0;
 *
 * 相关函数：rindex, strchr, strrchr
 **/

#include <strings.h>
#include <stdio.h>

void main(){
    char *s = "012345678901234567890";
    char *p;
    char *q;
    p = index(s, '5');
    q = rindex(s, '5');
    
    printf("p = %s\nq = %s\n", p, q);
}

/**
p = 5678901234567890
q = 567890
**/