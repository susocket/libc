/**
int isprint(int c);
检查参数c是否为可打印字符，包含空格。
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "01 [e?9";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isprint(str[i]))
            printf("\'%c\' is a printable character.\n", str[i]);
        else
            printf("%d is not a printable character.\n", str[i]);
    }
}

/**
$ ./isprint.out 
'0' is a printable character.
'1' is a printable character.
' ' is a printable character.
'[' is a printable character.
'e' is a printable character.
'?' is a printable character.
'9' is a printable character.

**/