/**
 * struct utmp *getutid(struct utmp *ut);
 * getutid()用来从目前utmp文件的读写位置逐一往后搜索参数ut指定的记录。
 * 如果ut->ut_type为RUN_LVL,BOOT_TIME,NEW_TIME或OLD_TIME其中之一，
 * 则查找与ut->ut_type相符的记录；
 * 如果ut->ut_type为INIT_PROCESS,LIGNIN_PROCESS,USER_PROCESS或
 * DEAD_PROCESS其中之一，则查找与ut->ut_id相符的记录。
 *
 **/

#include <utmp.h>
#include <stdio.h>

void main(){
    struct utmp ut, *u;
    ut.ut_type = RUN_LVL;
    while((u = getutid(&ut))){
        printf("%d %s %s %s\n",
               u->ut_type,
               u->ut_user,
               u->ut_line,
               u->ut_host);
    }
}