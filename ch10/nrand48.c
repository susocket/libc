/**
 * long int nrand48(unsigned short int xsubi[3]);
 * jrand48()会返回一个长整型随机数，范围在0到2^31之间。参数xsubi数组
 * 存放随机数方程序所需的初值，见（seed48()）
 *
 **/

#include <stdlib.h>
#include <stdio.h>

void main(){
    unsigned short int xsubi[3] = {1, 2, 3};
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("%6d  ", xsubi[j]);
        }
        printf("random number: %ld\n", nrand48(xsubi));
    }
}

/**
$ ./nrand48.out 
     1       2       3  random number: 949179875
 59000   43974   28966  random number: 565063343
 61731   23903   17244  random number: 1404751201
  7666   39619   42869  random number: 903337097
 11285   43283   27567  random number: 50399248
 41724    4128    1538  random number: 1641774161
 52567   63651   50102  random number: 2131256119
 38934   50798   65040  random number: 114856193
 34153    8706    3505  random number: 252011741
  9152   51643    7690  random number: 940424678
sun@ubuntu:~/code/c/libc/ch10$ ./nrand48.out 
     1       2       3  random number: 949179875
 59000   43974   28966  random number: 565063343
 61731   23903   17244  random number: 1404751201
  7666   39619   42869  random number: 903337097
 11285   43283   27567  random number: 50399248
 41724    4128    1538  random number: 1641774161
 52567   63651   50102  random number: 2131256119
 38934   50798   65040  random number: 114856193
 34153    8706    3505  random number: 252011741
  9152   51643    7690  random number: 940424678
**/