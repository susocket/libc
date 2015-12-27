/**
 * gid_t getegid(void);
 * getegid()用来获取执行目前进程有效的组识别码。有效的组识别码（effective group ID）
 * 用来决定进程执行时组的权限。
 **/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(){
    printf("Current effective group id: %d\n", getegid());
}