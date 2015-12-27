/**
 * struct utmp *getutent(void);
 *
 * getutent()用来从utmp文件（/var/run/utmp)中读取一项登录数据，该数据以utmp结构
 * 返回。第一次调用时会取得第一位用户数据，之后，每调用一次，则返回下一项数据，直到无
 * 任何数据时返回NULL。
 * 
 *  struct utmp{
        short int ut_type;          // 登录类型
        pid_t ut_pid;               // login进程的pid
        char ut_line[UT_LINE_SIZE]; // 登录装置名，省略了"/dev/"
        char ut_id[4];              // Inittab ID
        char ut_user[UT_NAMESIZE];  // 登录账号
        char ut_host[UT_HOSTSIZE];  // 登录账号的远程主机名称
        struct exit_status ut_exit; // 当类型为DEAD_PROCESS时进程的结束状态
        long int ut_session;        // SessionID
        struct timeval ut_tv;       // 时间记录
        int32_t ut_addr_v6[4];      // 远程主机的网络地址
        char __unused[20];          // 保留未使用
    };
 **/

#include <utmp.h>
#include <stdio.h>

void main(){
    struct utmp *u;
    while((u = getutent())){
        if(u->ut_type == USER_PROCESS){
            printf("%d %s %s %s\n",
                   u->ut_type, u->ut_user, u->ut_line, u->ut_host);
        }
    }
    endutent();
}

/**
7 sun tty7 
7 sun pts/0 :0
**/