/**
 * struct group *getgrname(const char *name);
 * 从组文件中查找组名为name的组，返回相应的组结构。
 *
 **/

#include <grp.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    struct group *grp;
    grp = getgrnam("root");
    if(grp){
        printf("%s:%s:%d\n", grp->gr_name, grp->gr_passwd, grp->gr_gid);
    }
}