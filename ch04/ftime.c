/**
 * int ftime(struct timeb *tp);
 * ftime()将目前时间日期由tp所指的结构返回，tp结构的定义为：
 *      struct timeb{
            time_t          time;           //1970年1月1日0时0分0秒算起的UTC时间秒数
            unsigned short  millintm;       //千分之一秒
            short           timezone;       //当前时区与Greenwich相差的时间，单位为分钟
            short           dstflag;        //日光节约时间的修正状态，若非0则启用修正。
        }
 * 返回值：无论成功与否，均返回0。
 *
 **/

#include <sys/timeb.h>
#include <time.h>
#include <stdio.h>

main(){
    struct timeb tp;
    time_t t = time((time_t*)NULL);
    ftime(&tp);
    printf("time: %ld\n", tp.time);
    printf("millitm: %d\n", tp.millitm);
    printf("timezone: %d\n", tp.timezone);
    printf("dsflag: %d\n", tp.dstflag);
    printf("utc time: %ld\n", t);
    printf("local time: %s\n", ctime(&t));
}

/**
time: 1450945841
millitm: 944
timezone: -480
dsflag: 0
utc time: 1450945841
local time: Thu Dec 24 16:30:41 2015

分析：
    因为运行此程序的os时区为+0800，timezone为-480（分钟），即-8个小时，
    意思当前时区早于Greenwich时间8个小时，即东8区，对否？
    
**/