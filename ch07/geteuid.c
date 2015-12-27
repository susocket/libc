/**
 * uid_t geteuid(void);
 * geteuid()用来获取执行目前进程有效的用户识别码。
 * 有效的用户识别码（Effective User ID）用来决定进程执行的权限，借由改变此值，进程
 * 可以获得额外的权限。倘若可执行文件的setID位已被设置，该进程执行时，其进程的euid值便
 * 会被设成该文件的所有者的uid。例如：可执行文件/usr/bin/passwd的权限为-r-s--x--x，
 * 其s为即为setID（SUID）位，当任何用户在执行passwd时，其有效的用户识别码便会被设成
 * passwd所有者的uid值，即root的uid值（0）
 * 
 **/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    printf("Current effective user id: %d\n", geteuid());
}