/**
int islower(int c);
检查参数c是否为小写字符。
int inupper(int c);
检查参数c是否为大写字符。
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "aBcD01e?9";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(islower(str[i]))
            printf("\'%c\' is a lower character.\n", str[i]);
        else if(isupper(str[i]))
            printf("\'%c\' is a upper character.\n", str[i]);
        else
            printf("\'%c\' is neither a lower nor an upper character.\n", str[i]);
    }
}

/**
$ ./islower.out 
'a' is a lower character.
'B' is a upper character.
'c' is a lower character.
'D' is a upper character.
'0' is neither a lower nor an upper character.
'1' is neither a lower nor an upper character.
'e' is a lower character.
'?' is neither a lower nor an upper character.
'9' is neither a lower nor an upper character.
**/