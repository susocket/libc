/**
 * char strncpy(char *dest, const char *src, size_t n);
 * 将src的前n个字符拷贝到dest所指的地址。
 **/

#include <stdio.h>
#include <string.h>

void main(){
    char a[30] = "aaaaaaaaaa";
    char *b = "bbbbbbbbbb";
    
    printf("%s\n", strncpy(a, b, 3));
}

/**
bbbaaaaaaa
**/