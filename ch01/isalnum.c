/**
 *
 *int isalnum(int c)
 *检查参数c是否为英文字母或阿拉伯数字。在标准c中相当于使用
 *(isalpha(c) !! isdigit(c))做测试
 *
 */

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "12345A#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isalnum(str[i]))
            printf("%c is an alphanumerica character.\n", str[i]);
    }
}

/****
        #include <ctype.h>
       定义的其它函数还有：
       int isalnum(int c);
       int isalpha(int c);
       int isascii(int c);
       int isblank(int c);
       int iscntrl(int c);
       int isdigit(int c);
       int isgraph(int c);
       int islower(int c);
       int isprint(int c);
       int ispunct(int c);
       int isspace(int c);
       int isupper(int c);
       int isxdigit(int c);
****/