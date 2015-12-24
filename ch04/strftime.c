/**
 * size_t strftime(char *s, sizt_t max, const char *format, const struct tm *tm);
 * strftime()会将参数tm的时间结构，依照参数format所制定的字符串格式做转换，转换后的字符串内容复制到到参数s
 * 所指的字符串数组中，该字符串数据最大长度为max参数所控制。
 *
 * 返回值：返回复制到参数s所指的字符串数组的总字符数，不包含结束符号。如果返回0，表示未复制字符串到参数s内，
 * 但不表示一定由错误发生。
 *
 * 附加说明：环境变量TZ和TC_TIME会影响此函数的结果。
 *
 **/

#include <stdio.h>
#include <time.h>

void main(){
    char *format[] = {"%Y-%m-%d %H:%M:%S", "%r", "%R", "%T", NULL};
    char buff[100];
    time_t now;
    struct tm *tm;
    int i = 0;
    
    time(&now);
    tm = localtime(&now);
    for(i = 0; format[i] != NULL; i++){
        strftime(buff, 100, format[i], tm);
        printf("%s --> %s\n", format[i], buff);
    }
}

/**

%Y-%m-%d %H:%M:%S --> 2015-12-24 17:19:20
%r --> 05:19:20 PM
%R --> 17:19
%T --> 17:19:20

**/