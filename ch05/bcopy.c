/**
 * void bcopy(const void *src, void *dest, int n);
 * bcopy()与memcpy()一样都是用来拷贝src所指向的内存内容前n个字节到dest所指的地址，
 * 不过，参数src与dest在传给函数时是相反的位置
 * void memcpy(void *dest, const void *src, int n);
 *
 * 相关函数：memccpy, memcpy, memmove, strcpy, strncpy
 **/

#include <string.h>
#include <stdio.h>

void main(){
   char dest[30] = "string(a)";
   char src[30] = "string\0string";
   int i;
   
   bcopy(src, dest, 30);
   printf("bcopy():");
   for(i = 0; i < 30; i++){
    printf("%c", dest[i]);
   }
   printf("\ndest string: %s\n", dest);
   
   memcpy(dest, src, 30);
   printf("\nmemcpy():");
   for(i = 0; i < 30; i++){
    printf("%c", dest[i]);
   }
   printf("\ndest string: %s\n", dest);
}