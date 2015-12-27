/**
 * struct passwd *getpwent(void);
 * getpwent()用来从密码文件(/etc/passwd)中读取一项用户数据，该用户数据以passwd
 * 机构返回。第一次调用返回第一个用户，之后调用依次取下一个用户，直到NULL。
 *
 **/

#include <pwd.h>
#include <sys/types.h>
#include <stdio.h>


void main(){
    struct passwd *user;
    while((user = getpwent()) != NULL){
        printf("%s:%d:%d:%s:%s:%s\n",
               user->pw_name, user->pw_uid, user->pw_gid,
               user->pw_gecos, user->pw_dir, user->pw_shell);
    }
    endpwent();
}