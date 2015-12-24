/**
 * char *ctime(const time_t *timep);
 * ctime()将参数timep所指的time_t变量（长整型）中的信息转换成真是世界所使用的时间日期表示法，
 * 然后将结果以字符串的形式返回。
 * 此函数已经由当前时区转换成当地时间，字符串格式为："Thu Dec 24 15:27:38 2015\n"
 * 再调用相关的时间日期函数，此字符串可能会被破坏。
 *
 **/
#include <time.h>
#include <stdio.h>

void main(){
    time_t timep;
    time(&timep);
    printf("%s", ctime(&timep));
}

/**
Thu Dec 24 15:27:38 2015
**/