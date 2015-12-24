/**
 * struct tm *gmtime(const time_t *timep);
 *
 * gmtime（）将参数timep所指的time_t结构中的信息转换成真实世界所使用的时间表示法，
 * 然后将结构由结构tm返回。tm结构体的定义为：
 *      struct tm{
            int tm_sec;     //代表目前的秒数，正常范围0-59，但允许至61
            int tm_min;     //代表当前的分数，范围0-59
            int tm_hour;    //从午夜算起的时数，范围0-23
            int tm_mday;    //目前月份的日数，范围1-31
            int tm_mon;     //代表目前的月份，从一月算起，范围0-11
            int tm_year;    //从1900年算起至今的年数
            int tm_wday;    //一星期中的日数，从星期日算起，范围0-6
            int tm_yday;    //从今年1月1日算起至今的天数，范围0-365
            int tm_isdst;   //日过节约时间的旗标
        }
 * 注意：：：此函数返回的时间日期未经过时区转换，而是UTC时间。
 * 返回结构tm代表目前的UTC时间。
 * 
 **/

#include <time.h>
#include <stdio.h>

void main(){
    char *wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    time_t timep;
    struct tm *p;
    
    time(&timep);
    p = gmtime(&timep);
    printf("%d-%d-%d ", (1900+p->tm_year), (1+p->tm_mon), p->tm_mday);
    printf("%s %d:%d:%d\n", wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);
}

/**
 *2015-12-24 Thu 7:45:31
 **/