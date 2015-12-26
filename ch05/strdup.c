/**
 * char *strdup(const char *s);
 * strdup()会先用malloc()分配与参数s字符串相同的空间大小，然后将参数s字符串的内容
 * 复制到该内存地址，然后把该地址返回。该地址最后需要使用free()来释放。
 *
 * 返回NULL表示内存不足。
 **/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char a[] = "strdup";
    char *b;
    b = strdup(a);
    printf("%s\n", b);
    free(b);
}