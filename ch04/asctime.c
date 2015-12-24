/**
 * char *asctime(const struct tm *timeptr);
 * ctime()将参数timeptr所指的tm结构中的信息转换成真是世界所使用的时间日期表示法，
 * 然后将结果以字符串的形式返回。
 * 此函数已经由当前时区转换成当地时间，字符串格式为："Thu Dec 24 15:27:38 2015\n"
 * 再调用相关的时间日期函数，此字符串可能会被破坏。
 *
 * asctime()与ctime()不同之处在于传入的参数是不同的结构。
 * 
 **/

#include <time.h>
#include <stdio.h>

void main(){
    time_t timep;
    time(&timep);
    printf("%s", asctime(gmtime(&timep)));
}

/**
 *Thu Dec 24 07:31:57 2015
 **/