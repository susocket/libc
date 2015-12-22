/**
 int isascii(int c);
 检查参数c是否为ASCII字符，也就是判断c的范围是否在0到127之间。
 注：此为宏定义，并非真正函数。
 **/

#include <stdio.h>
#include <ctype.h>

void main(){
    int i;
    for(i = 125; i < 130; i++){
        if(isascii(i))
            printf("%d is an ascii character.\n", i);
        else
            printf("%d is not an ascii character.\n", i);
    }
}

/**
125 is an ascii character.
126 is an ascii character.
127 is an ascii character.
128 is not an ascii character.
129 is not an ascii character.
**/