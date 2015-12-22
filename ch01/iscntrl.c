/**
int iscntrl(int c);
检查参数c是否为控制字符（也就是范围在0-31之间的ascii码）
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "\a\bP\t[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(iscntrl(str[i]))
            printf("%d is a control character.\n", str[i]);
        else
            printf("%c is not a control character.\n", str[i]);
    }
}

/**
7 is a control character.
8 is a control character.
P is not a control character.
9 is a control character.
[ is not a control character.
e is not a control character.
? is not a control character.
**/