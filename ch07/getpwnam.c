/**
 * struct passwd *getpwnam(const char *name);
 * getpwnam()用来从密码文件中查找用户名为nmae的账号数据，找到后便以passwd结构返回，
 * 找不到返回NULL。
 *
 **/

#include <pwd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    struct passwd *pwd = getpwnam("root");
    if(pwd){
        printf("name: %s\n", pwd->pw_name);
        printf("uid: %d\n", pwd->pw_uid);
        printf("home: %s\n", pwd->pw_dir);
    }
}