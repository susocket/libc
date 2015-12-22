/**
 *将字符串转换成浮点数
 *double atof(const char *nptr);
 *ntof()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号
 *才开始做转换，而再遇到非数字或字符串结束('\0')时才结束转换，并返回结果。
 *参数nptr字符串可以包含正负号、小数点或E（e）来表示指数部分。
 **/
#include <stdlib.h>
#include <stdio.h>

void main(){
    char *a = "-100.23";
    char *b = "200e-2";
    float c = 0;
    c = atof(a) + atof(b);
    printf("%f + %f = %f\n", atof(a), atof(b), c);    
}

/**
 *-100.230000 + 2.000000 = -98.230003
 *
 *注1：如果不添加<stdio.h>头文件，则会报：
 *warning: incompatible implicit declaration of built-in function ‘printf’ [enabled by default]
 *警告；
 *
 *注2：如果不加<stdlib.h>头文件，则会报：
 *atof.c:16:5: warning: format ‘%f’ expects argument of type ‘double’, but argument 3 has type ‘int’ [-Wformat]
 *警告
 *
 **/