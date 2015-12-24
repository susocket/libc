/**
 * time_t time(time_t *t);
 * 获取当前时间
 * 此函数会返回从公元1970年1月1日的UTC时间0时0分0秒算起到现在所经过的秒数。
 * time()  returns  the  time  as  the  number of seconds since the Epoch,
 * 1970-01-01 00:00:00 +0000 (UTC).
 * 如果参数t为非空指针的话，此函数也会将返回值存到t指向的指针。
 *
 * 返回值：成功返回描述，失败返回（（time_t) -1)，并置errno。
 *
 * 注意：返回的时UTC时间秒数，不是本地时间！！！
 **/

#include <stdio.h>
#include <time.h>

void main(){
    time_t t1, t2, t3;
    t1 = time(&t2);
    t3 = time((time_t*)NULL);
    
    printf("t1 = %ld\nt2 = %ld\nt3 = %ld\n", t1,t2,t3);
}

/**
t1 = 1450941605
t2 = 1450941605
t3 = 1450941605
**/