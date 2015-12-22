/**
 int isalpha(int c)
 检查参数c是否为英文字母，在标准c中，相当于使用
 (isupper(c) || islower(c))做测试
 注：此为宏定义，并非真正函数。
**/

#include <stdio.h>
#include <ctype.h>

void main(){
    char str[] = "12345A#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(isalpha(str[i]))
            printf("%c is an alphabetic character.\n", str[i]);
    }
}

/**
$ gcc -o isalpha.out ./isalpha.c
$ ./isalpha.out 
A is an alphabetic character.
F is an alphabetic character.
D is an alphabetic character.
s is an alphabetic character.
P is an alphabetic character.
e is an alphabetic character.
**/
