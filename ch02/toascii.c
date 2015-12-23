/**
 *int toascii(int c);
 *将参数c转换成7位的unsigned char值，第八位会被清除，此字符即会被转换成ASCII码字符
 *
 */


#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 128;
    char b;
    printf("before: a value = %d(%c)\n", a,a);
    b = toascii(a);
    printf("after: a vlalue = %d(%c)\n", b, b);
}

/**
before: a value = 128(�)
after: a vlalue = 0()

**/