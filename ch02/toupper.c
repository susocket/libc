/**
 * int toupper(int c);
 * 若参数c为小写字母，则将对应的大写字母返回；否则，若不需转换，则将c值返回。
 *
 **/
#include <stdio.h>
#include <stdlib.h>

void main(){
    char s[] = "AbcdE&54%%Tk;";
    int i;
    
    printf("before: %s\n", s);
    for(i = 0; i < sizeof(s); i++){
        s[i] = toupper(s[i]);
    }
    printf("after: %s\n", s);
}

/**
 *before: AbcdE&54%%Tk;
 *after: ABCDE&54%%TK;
**/