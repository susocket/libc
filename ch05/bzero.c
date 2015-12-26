/**
 * void bzero(void *s, int n);
 * bzero()会将参数s所指的内存区域的前n个字节，全部设为0，相当于
 * memset(void *s, 0, n);
 *
 * 建议使用memset代替。
 *
 * 相关函数：memset, swab
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char s1[10] = "good boy!";
    char s2[10] = "good boy!";
    int i;
    
    printf("original: %s\n", s1);
    for(i = 0; i < 10; i++){
        printf("%2x ", s1[i]);
    }
    printf("\n");
    
    bzero(s1, 10);
    printf("bzero(): ");
    for(i = 0; i < 10; i++){
        printf("%d ", s1[i]);
    }
    printf("\n");
    
    memset(s2, 0, 10);
    printf("memset(): ");
    for(i = 0; i < 10; i++){
        printf("%d ", s1[i]);
    }
    printf("\n");
}

/**
original: good boy!
67 6f 6f 64 20 62 6f 79 21  0 
bzero(): 0 0 0 0 0 0 0 0 0 0 
memset(): 0 0 0 0 0 0 0 0 0 0 
**/