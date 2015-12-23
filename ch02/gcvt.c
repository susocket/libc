/**
 *char *gcvt(double number, size_t ndigits, char *buf);
 *gcvt()用来将参数number转换成ASCII字符串，参数ndigits用来表示显示的位数。
 *gcvt()与ecvt()和fcvt()不同的地方在于：gcvt()所转换后的字符串包含小数点和正负号。
 *若转换成功，转换后的字符串会放在buf指针所指的空间。
 *
 *返回值：返回一字符串指针，此地址即为buf指针。
 *
 **/

#include <stdlib.h>
#include <stdio.h>

void main(){
    double a = 123.45;
    double b = -1234.56;
    char *ptr1, *ptr2;
    int decpt, sign;
    ptr1 = gcvt(a, 5, ptr2);
    printf("ptr1 = %s, ptr2 = %s\n", ptr1, ptr2);
    ptr1 = gcvt(b, 6, ptr2);
    printf("ptr1 = %s, ptr2 = %s\n", ptr1, ptr2);
}

/**
 * ptr1 = 123.45, ptr2 = 123.45
 * ptr1 = -1234.56, ptr2 = -1234.56
 * */
