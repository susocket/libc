/**
int isxdigit(int c);
检查参数c是否为十六进制数字0-9A-Fa-f
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "AaFfJj0123[e?9";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isxdigit(str[i]))
            printf("\'%c\' is a xdigit character.\n", str[i]);
        else
            printf("\'%c\' is not a xdigit character.\n", str[i]);
    }
}

/**
$ ./isxdigit.out 
'A' is a xdigit character.
'a' is a xdigit character.
'F' is a xdigit character.
'f' is a xdigit character.
'J' is not a xdigit character.
'j' is not a xdigit character.
'0' is a xdigit character.
'1' is a xdigit character.
'2' is a xdigit character.
'3' is a xdigit character.
'[' is not a xdigit character.
'e' is a xdigit character.
'?' is not a xdigit character.
'9' is a xdigit character.
**/