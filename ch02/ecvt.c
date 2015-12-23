/**
 *char *ecvt(double number, int ndigtis, int *decpt, int *sign);
 *ecvt()用来将参数number转换成ASCII码字符串。
 *参数ndigits：表示显示的位数；
 *若转换成功，参数decpt指针所指向的变量会返回数值中小数点的地址（从左至右算起）；
 *而参数sign指针所指的变量则代表数值的正负，若数值为正，返回0，否则返回1.
 *
 *返回值：返回一字符串指针，此字符串声明为static，若再次调用ecvt()或fcvt(),
 *此字符串的内容会被覆盖！！！
 *
 *注1：请尽量使用sprintf()做转换，而不是使用ecvt()。
 *注2：ecvt()和fcvt()均为宏定义，需要glibc库的支持。
 *
 **/

#include <stdio.h>
#include <stdlib.h>

void main(){
    double a = 123.45;
    double b = 1234.56;
    char *ptr1, *ptr2;
    int decpt, sign;
    ptr1 = ecvt(a, 5, &decpt, &sign);
    printf("decept = %d, sign = %d, a value = %s\n", decpt, sign, ptr1);
    ptr2 = ecvt(b, 6, &decpt, &sign);
    printf("decept = %d, sign = %d, b value = %s\n", decpt, sign, ptr2);
    printf("!!!! a value = %s\n", ptr1);
}

/**

decept = 3, sign = 0, a value = 12345
decept = 4, sign = 0, b value = 123456
!!!! a value = 123456

**/