/**
 * char strtok(char *s, const char *delim);
 * strtok()用来将字符串分割成一个个片段。参数s指向欲分割的字符串，
 * 参数delim则为分割字符串。当strtok()在s中发现delim的分割符时，
 * 会将该符号改为'\0'字符。
 *
 * 在第一次调用时，strtok的第一个参数s必须给出，往后调用strtok(),
 * 则将第一个参数s设为NULL。每次调用成功，则返回下一个分割后的字符串指针。
 *
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char s[] = "ab-cd: ef;gh: i-jkl;mnop;qrs-tu:wxy-z";
    char *delim = "-:; ";
    char *p = strtok(s, delim);
    while(p){
        printf("%s ", p);
        p = strtok(NULL, delim);
    }
    printf("\n");
}