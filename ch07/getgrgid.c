/**
 * struct group *getgrgid(git_t gid);
 * getgrgid()用来依据参数gid指定的组识别码逐一搜索组文件，
 * 找到后便将改组的数据以group结构返回；没有找到返回NULL
 *
 **/

#include <grp.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    struct group *grp;
    grp = getgrgid(1000);
    if(grp){
        printf("%s:%s:%d\n", grp->gr_name, grp->gr_passwd, grp->gr_gid);
    }
}