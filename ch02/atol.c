/**
 *将字符串转换长整数
 *int atol(const char *nptr);
 *atol()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号
 *才开始做转换，而再遇到非数字或字符串结束('\0')时才结束转换，并返回结果。
 *
 *atol()与使用strtol(nptr, (char**)NULL, 10)结果相同。
 *
 **/
 
#include <stdlib.h>
#include <stdio.h>

 void main(){
    char a[] = "1000000000";
    char b[] = "1234567890";
    long c = atol(a) + atol(b);
    printf("%ld + %ld = %ld\n", atol(a), atol(b), c);
 }
 
 /**
  *1000000000 + 1234567890 = 2234567890
  **/