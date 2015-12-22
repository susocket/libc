/**
int isdigit(int c);
检查参数c是否为阿拉伯数字0-9（ascii码48(0x30)-57(0x39)）
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "0123[e?9";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isdigit(str[i]))
            printf("%d is a digit character.\n", str[i]);
        else
            printf("%c is not a digit character.\n", str[i]);
    }
}

/**
./isdigit.out 
48 is a digit character.
49 is a digit character.
50 is a digit character.
51 is a digit character.
[ is not a digit character.
e is not a digit character.
? is not a digit character.
57 is a digit character.

**/