/**
 * void *memmove(void *dest, const void *src, sizt_t n);
 * memmove()与memcpy()一样都是用来拷贝src所指的内存内容前n个字节到dest
 * 所指的地址上。不同的是，当src和dest所指的内存区域重叠时，memmove()仍然
 * 可以正确地处理，不过执行效率上比使用memcpy略慢一些。
 *
 * 返回指向dest的指针。
 * 附加说明：指针src和dest所指的内存区域可以重叠。
 *
 **/
#include <string.h>
#include <stdio.h>

void main(){
    char a[30] = "abcdefghij";
    char *p = a+5;
    int i;
    // 注：此处用strncpy()也可以
    memncpy(p, a, 10);
    for(i = 0; i < 30; i++){
        printf("%c", a[i]);
    }
    printf("\n");
}

/**
 *abcdeabcdefghij
 **/