/**
 * void *memfrob(void *s, size_t n);
 * memfrob（）用来将参数s所指的内存空间前n个字符与42做XOR运算，
 * 用途是可以隐藏一特定字符串内容。只要再次使用相同的参数调用memfrob()
 * 即可将内容还原。
 *
 * 返回值：返回编码成功后的内存空间地址 *
 * 注：memfrob()为Linux特有的函数。
 *
 * 相关函数：strfry
 **/

#include <string.h>
#include <stdio.h>

void main(){
    char a[] = "This_is_memfrob";
    
    printf("first: %s\n", a);
    // 注意函数中的strlen，与sizeof的区别
    memfrob(a, strlen(a));
    printf("then: %s\n", a);
    memfrob(a, strlen(a));
    printf("lats: %s\n", a);
}

/**
first: This_is_memfrob
then: ~BCYuCYuGOGLXEH
lats: This_is_memfrob
**/
