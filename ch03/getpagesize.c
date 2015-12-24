/**
 * size_t getpagesize(void);
 * 返回一分页的大小，单位为字节（byte）。此为系统的分页大小，不一定会和硬件分页的大小相同。
 * 在x86机器上，其值应该为4096bytes。
 *
 * 表头文件<unistd.h>
 *
 **/

#include <stdio.h>
#include <unistd.h>

void main(){
    printf("pagesize = %d\n", getpagesize());
}

/**
 * pagesize = 409
 **/