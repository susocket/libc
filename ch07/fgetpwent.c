/**
 * struct passwd *fgetpwent(FILE *stream);
 * fgetpwent()会从参数stream指定的文件读取一行数据，然后以passwd结构
 * 将该数据返回。参数stream所指定的文件必须和/etc/passwd相同的格式。
 *
 * struct passwd {
               char   *pw_name;       //* username 
               char   *pw_passwd;     //* user password 
               uid_t   pw_uid;        // user ID 
               gid_t   pw_gid;        //* group ID 
               char   *pw_gecos;      //* user information 
               char   *pw_dir;        //* home directory 
               char   *pw_shell;      //* shell program 
           };

 **/

#include <pwd.h>
#include <sys/types.h>
#include <stdio.h>


void main(){
    struct passwd *user;
    FILE *fd;
    fd = fopen("/etc/passwd", "r");
    while((user = fgetpwent(fd)) != NULL){
        printf("%s:%d:%d:%s:%s:%s\n",
               user->pw_name, user->pw_uid, user->pw_gid,
               user->pw_gecos, user->pw_dir, user->pw_shell);
    }
    fclose(fd);
}