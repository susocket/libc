/**
int isgraph(int c);
检查参数c是否为可打印字符，不含空格。
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "01 [e?9";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isgraph(str[i]))
            printf("\'%c\' is a graphic character.\n", str[i]);
        else
            printf("%d is not a graphic character.\n", str[i]);
    }
}

/**
'0' is a graphic character.
'1' is a graphic character.
32 is not a graphic character.
'[' is a graphic character.
'e' is a graphic character.
'?' is a graphic character.
'9' is a graphic character.
**/