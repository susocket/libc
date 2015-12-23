/**
 * long int strtoul(const char *nptr, char **endptr, int base);
 * strtol()会将参数nptr字符串根据参数base来转换成无符号长整型数。
 * 参数base范围从2至36（因为10个阿拉伯数字加上26个英文字母，最多表示36进制）
 * 如base值为10，则采用10进制；若base值为16，则采用16进制。如base值为0，则默认采用
 * 10进制做转换，但是遇到如0x前置字符，则会使用16进制做转换。
 *
 * 一开始strtol会扫描nptr字符串，跳过前面的空格字符，直到遇上正负符号才开始做转换。再遇到
 * 非数字或字符串结束时（遇到'\0'字符），则结束转换，并返回结果。
 * 若指针endptr不为NULL， 则会将遇到不合条件而终止的nptr中的字符串指针由endptr返回。
 *
 * 返回值：返回转换后的长整型数，否则返回ERANGE，并将错误代码存入errno中。
 *
 * 注：ERANGE，指定的转换字符超出合法范围。
 **/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char *a = "-100000000";
    char *b = "    ffff";
    
    printf("a = %ld\n", strtoul(a, NULL, 0));
    printf("a = %ld\n", strtoul(a, NULL, 2));
    printf("b = %ld\n", strtoul(b, NULL, 16));
    
}

/**
a = -100000000
a = -256
b = 65535
**/