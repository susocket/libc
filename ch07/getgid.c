/**
 * gid_t getgid(void);
 * getgid()用来获取执行目前进程的组识别码。
 **/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    printf("Current group id: %d\n", getgid());
}