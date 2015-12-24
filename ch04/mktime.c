/**
 * time_t mktime(struct tm *timep);
 * mktime()用来将参数timep所指的tm结构数据转换成公元1970年1月1日0时0分0秒算起至今的UTC时间所经过的秒数。
 *
 * 注意：mktime()会将参数timep当做本地时间看待，而不是UTC时间.
 **/

#include <time.h>
#include <stdio.h>

void main(){
    time_t timep;
    struct tm *p;
    time(&timep);
    printf("time() = %ld\n", timep);
    
    p = localtime(&timep);
    timep = mktime(p);
    printf("time()->localtime()->mktime(): %ld\n", timep);
    
    p = gmtime(&timep);
    timep = mktime(p);
    printf("time()->gmtime()->mktime(): %ld\n", timep);
}

/**
time() = 1450947732
time()->localtime()->mktime(): 1450947732
time()->gmtime()->mktime(): 1450918932
**/