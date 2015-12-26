/**
 * char *strchr(const char *s, int c);
 * strchr()用来找出参数s字符串中第一个出现参数c的地址，然后
 * 将该字符串出现的地址返回
 *
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char *s = "0123456789123456789";
    char *p = NULL;
    p = strchr(s, '5');
    if(p != NULL){
        printf("%s\n",p);
    }
    else{
        printf("no found.\n");
    }
}

/**
 * 56789123456789
 **/