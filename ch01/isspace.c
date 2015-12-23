/**
int isspace(int c);
检查参数c是否为“空格”字符
空格字符包括：空格(' ')，制表符（'\t')，回车符('\r'), 换行符('\n'),垂直定位符('\v'),翻页（'\f')

注1：注意与空白字符判断函数isblank(int c)的区别，空白字符只包含空格符和制表符。
注2：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "\r \n\v\fP\t[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isspace(str[i]))
            printf("[%d] is a space character.\n", str[i]);
        else
            printf("[%d] is not a space character.\n", str[i]);
    }
}

/**
./isspace.out 
[13] is a space character.
[32] is a space character.
[10] is a space character.
[11] is a space character.
[12] is a space character.
[80] is not a space character.
[9] is a space character.
[91] is not a space character.
[101] is not a space character.
[63] is not a space character.
**/