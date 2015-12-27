/**
 * int getpw(uid_t uid, char *buf);
 * getpw()会从/etc/passwd中查找符合参数uid所指定的用户账号数据，
 * 找不到相关数据就返回-1， 所返回的buf字符串格式如下：
 * 账号:密码:UID:GID:全名:主目录:SHELL
 *
 * 返回0表示成功。
 *
 **/

#include <pwd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    char buff[80];
    if(!getpw(1000, buff)){
        printf("%s\n", buff);
    }
}