/**
 * struct group *fgetgrent(FILE *stream);
 * fgetgrent()从参数stream指定的文件中读取一行数据，然后以group结构将该数据返回。
 * 参数stream所指定的文件必须和/etc/group相同的格式。
 * struct group {
               char   *gr_name;        // group name 
               char   *gr_passwd;      // group password 
               gid_t   gr_gid;         // group ID 
               char  **gr_mem;         // group members 
           };
 * 返回值：返回group结构数据，如果返回NULL，则表示已经无数据，或由错误发生。
 **/
 

#include <grp.h>
#include <sys/types.h>
#include <stdio.h>

int main(){
    FILE *fd;
    struct group *data;
    int i;
    
    if((fd = fopen("/etc/group", "r")) == NULL){
        printf("Can not open /etc/group file.\n");
        return -1;
    }
    while((data = fgetgrent(fd)) != NULL){
        i = 0;
        printf("%s:%s:%d:", data->gr_name, data->gr_passwd, data->gr_gid);
        while(data->gr_mem[i])
            printf("%s,",data->gr_mem[i++]);
        printf("\n");
    }
    fclose(fd);
    return 0;
} 