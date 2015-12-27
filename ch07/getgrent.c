/**
 * struct group *getgrent(void);
 * getgrent()用来从组文件（/get/group)中读取一项组数据。
 * 该数据以group结构返回，第一调用时会取得第一项组数据，
 * 之后每调用一次就会返回下一项数据，直到无任何数据时返回NULL。
 *
 **/

#include <grp.h>
#include <sys/types.h>
#include <stdio.h>

void main(){
    struct group *data;
    int i;
    while((data = getgrent()) != NULL){
        i = 0;
        printf("%s:%s:%d:", data->gr_name, data->gr_passwd, data->gr_gid);
        while(data->gr_mem[i])
            printf("%s,",data->gr_mem[i++]);
        printf("\n");
    }
}
