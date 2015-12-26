/**
 * char *strfry(char *string);
 * strfry()会利用rand()来随机重新分配string字符串内的字符，然后返回指向参数string
 * 字符串的指针。
 *
 * 注意：由于strfry()会改变参数string字符串的内容，因此参数string的字符串指针必须指向
 * 可写的内存地址。
 *
 * 需要添加#define _GNU_SOURCE宏定义
 * 
 **/
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

void main(){
    char a[] = "frank@yahoo.com";
    int i;
    for(i = 0; i < 10; i++){
        printf("%s\n", strfry(a));
    }
}