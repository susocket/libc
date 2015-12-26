/**
 * char *strstr(const char *haystack, const char *needle);
 * strstr()会从字符串haystack中搜寻字符串needle，并将第一次出现的地址返回。
 *
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char *s = "12345678901234567890";
    printf("%s\n", strstr(s, "901"));    
}

/**
 * 901234567890
 **/