/**
int isblank(int c);
检查参数c是否为空白字符（空格，ascii码32/制表符，ascii码为9）
注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "123 A#FDs P\t[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isblank(str[i]))
            printf("%d is a blank character.\n", str[i]);
        else
            printf("%c is not a blank character.\n", str[i]);
    }
}

/**
./isblank.out 
1 is not a blank character.
2 is not a blank character.
3 is not a blank character.
32 is a blank character.
A is not a blank character.
# is not a blank character.
F is not a blank character.
D is not a blank character.
s is not a blank character.
32 is a blank character.
P is not a blank character.
9 is a blank character.
[ is not a blank character.
e is not a blank character.
? is not a blank character.
**/