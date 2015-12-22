/**
 *将字符串转换整数
 *int atoi(const char *nptr);
 *atoi()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号
 *才开始做转换，而再遇到非数字或字符串结束('\0')时才结束转换，并返回结果。
 *
 *atoi()与使用strtol(nptr, (char**)NULL, 10)结果相同。
 *
 **/
 
#include <stdlib.h>
#include <stdio.h>

 void main(){
    char a[] = "-100";
    char b[] = "456";
    int c = atoi(a) + atoi(b);
    printf("%d + %d = %d\n", atoi(a), atoi(b), c);
 }
 
 /**
  *-100 + 456 = 356
  *
  **/
