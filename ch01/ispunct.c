/**
 *
 *int ispunct(int c)
 *检查参数c是否为标点符号
 * 注：此为宏定义，并非真正函数。
 */

#include <stdio.h>
#include <ctype.h>


void main(){
    char str[] = "12;^A#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++){
        if(ispunct(str[i]))
            printf("\'%c\' is a punct character.\n", str[i]);
        else
            printf("\'%c\' is not a punct character.\n", str[i]);
    }
}

/**
$ ./ispunct.out 
'1' is not a punct character.
'2' is not a punct character.
';' is a punct character.
'^' is a punct character.
'A' is not a punct character.
'#' is a punct character.
'F' is not a punct character.
'D' is not a punct character.
's' is not a punct character.
'P' is not a punct character.
'[' is a punct character.
'e' is not a punct character.
'?' is a punct character.
**/