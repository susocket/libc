/**
 * int getgroups(int size, gid_t list[]);
 * getgroups()用来获取目前用户所属的组代码。
 * 参数size为list[]所能容纳的gid_t的数目。如果size值为0，此函数仅会返回
 * 用户所属的组的数目。
 *
 **/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>


void main(){
    gid_t list[500];
    int x, i;
    
    x = getgroups(500, list);
    for(i = 0; i < x; i++){
        printf("%d:%d\n", i, list[i]);
    }
}