/**
 * double erand48(unsigned short int xsubi[3]);
 * erand48()会返回一正的浮点型随机数值，范围在0.0至1.0之间。
 * 参数xsubi数组存放随机数为程序所需初值（见seed48()).
 * 返回值：0.0至1.0之间的随机数。
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
        printf("random number: %f\n", erand48(xsubi));
    }
}

/**
$ ./erand48.out 
     1       2       3  random number: 0.441996
 59000   43974   28966  random number: 0.263128
 61731   23903   17244  random number: 0.654138
  7666   39619   42869  random number: 0.420649
 11285   43283   27567  random number: 0.023469
 41724    4128    1538  random number: 0.764511
 52567   63651   50102  random number: 0.992443
 38934   50798   65040  random number: 0.053484
 34153    8706    3505  random number: 0.117352
  9152   51643    7690  random number: 0.437919

$ ./erand48.out 
     1       2       3  random number: 0.441996
 59000   43974   28966  random number: 0.263128
 61731   23903   17244  random number: 0.654138
  7666   39619   42869  random number: 0.420649
 11285   43283   27567  random number: 0.023469
 41724    4128    1538  random number: 0.764511
 52567   63651   50102  random number: 0.992443
 38934   50798   65040  random number: 0.053484
 34153    8706    3505  random number: 0.117352
  9152   51643    7690  random number: 0.437919

$ ./erand48.out 
     1       2       3  random number: 0.441996
 59000   43974   28966  random number: 0.263128
 61731   23903   17244  random number: 0.654138
  7666   39619   42869  random number: 0.420649
 11285   43283   27567  random number: 0.023469
 41724    4128    1538  random number: 0.764511
 52567   63651   50102  random number: 0.992443
 38934   50798   65040  random number: 0.053484
 34153    8706    3505  random number: 0.117352
  9152   51643    7690  random number: 0.437919
  
  可以看到：seed一样，生成的随机数一样。
**/