/**
 * char *getlogin(void);
 * getlogin()会从/var/run/utmp中查找目前已登录的用户账号名称。
 * 找不到返NULL,如果找到，就自动分配一个字符数组，把账号复制到此数组，
 * 最后将指向此字符串的指针返回。
 *
 * 注意：getlogin()自动配置的字符数组会由调用cuserid()或再次调用
 * getlogin()时所覆盖。
 *
 * getlogin()会有潜在的安全问题，使用时请留意Q！
 * 环境变量LOGNAME同样也是取得登陆的用户账号名称。
 *
 **/

#include <unistd.h>
#include <stdio.h>

void main(){
    printf("I am %s\n", getlogin());
}