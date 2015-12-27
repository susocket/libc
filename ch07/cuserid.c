/**
 * char *cuserid(char *string);
 * cuserid()会将用户账号名称复制到参数string所指的字符串数组中，如果
 * 参数string为空指针（NULL），cuserid()会自动分配一静态的字符串数组，
 * 然后将指向此字符串的指针返回。此自动分配的空间大小由定义在stdio.h中的
 * L_cuserid值决定（POSIX定义为9）。
 *
 * 注意：cuserid()自动配置的字符串数组会由调用getlogin()或再调用cuserid()
 * 时所覆盖。
 *
 * 请尽量使用getpwuid(geteuid())；来取代此函数。
 *
 * 注意：cuserid()函数需要声明：
 * #define  _XOPEN_SOURCE
 * 否则出错
 * 
 **/


#define  _XOPEN_SOURCE
#include <stdio.h>

void main(){
    printf("I am %s.\n", cuserid(NULL));
}