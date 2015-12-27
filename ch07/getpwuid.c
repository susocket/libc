/**
 * struct passwd *getpwuid(uid_t uid);
 * getpwuid()用来从密码文件中查找用户ID为uid的账号数据，找到后便以passwd结构返回，
 * 找不到返回NULL。
 *
 **/

#include <pwd.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    struct passwd *pwd = getpwuid(0);
    if(pwd){
        printf("name: %s\n", pwd->pw_name);
        printf("uid: %d\n", pwd->pw_uid);
        printf("home: %s\n", pwd->pw_dir);
    }
}
