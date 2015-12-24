/**
 * void *alloca(sizt_t size);
 * alloca()用来配置size个字节的内存空间。和malloc/calloc不同的是，
 * alloca()是从栈空间（stack）中分配内存，因此在函数返回时会自动释放此空间。
 * 返回值：若分配成功，则返回一指针，失败则返回NULL
 *
 * 注意：But beware!  By default the  glibc  version  of  <stdlib.h>
       includes <alloca.h> and that contains the line:
           #define alloca(size)   __builtin_alloca (size)

 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char *str;
    
    str = (char*) alloca(100);
    strcpy(str, "I\'m a good boy!");
    printf("%s\n", str);
}