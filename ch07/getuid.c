/**
 * uid_t getuid(void);
 * 获取执行目前进程的用户识别码。
 *
 **/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    printf("I am %d\n", getuid());
}