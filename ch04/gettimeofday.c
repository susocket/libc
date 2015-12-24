/**
 * int gettimeofday(struct timeval *tv, struct timezone *tz);
 * gettimeofday()会把当前时间由tv所指的结构返回，当地时区则放到tz所指的结构中。
 * 两个结构体定义如下：
 *      struct timeval{
            long tv_sec;        //秒
            long tv_usec;       //微秒
         }
         
         struct timezone{
            int tz_minuteswest;     // 和Greenwich时间相差了多少分钟
            int tz_dsttime;         // 日光节约时间的状态
         }
         上述两个结构都定义在/usr/include/sys/time.h。
 * 返回值：成功：0， 失败-1.
 **/

#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

void main(){
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv, &tz);
    
    printf("tv_sec: %ld\n", tv.tv_sec);
    printf("tv_usec: %ld\n", tv.tv_usec);
    printf("tz_minuteswest: %d\n", tz.tz_minuteswest);
    printf("tz_dsttime: %d\n", tz.tz_dsttime);
}

/*
tv_sec: 1450945811
tv_usec: 704619
tz_minuteswest: -480
tz_dsttime: 0
*/