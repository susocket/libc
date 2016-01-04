/**
 * long int jrand48(unsigned short int xsubi[3]);
 * jrand48()会返回一个长整型随机数，范围在-2^31到2^31之间。参数xsubi数组
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
        printf("random number: %ld\n", jrand48(xsubi));
    }
}

/**
$ ./jrand48.out 
     1       2       3  random number: 1898359750
 59000   43974   28966  random number: 1130126687
 61731   23903   17244  random number: -1485464893
  7666   39619   42869  random number: 1806674195
 11285   43283   27567  random number: 100798496
 41724    4128    1538  random number: -1011418973
 52567   63651   50102  random number: -32455058
 38934   50798   65040  random number: 229712386
 34153    8706    3505  random number: 504023483
  9152   51643    7690  random number: 1880849356

$ ./jrand48.out 
     1       2       3  random number: 1898359750
 59000   43974   28966  random number: 1130126687
 61731   23903   17244  random number: -1485464893
  7666   39619   42869  random number: 1806674195
 11285   43283   27567  random number: 100798496
 41724    4128    1538  random number: -1011418973
 52567   63651   50102  random number: -32455058
 38934   50798   65040  random number: 229712386
 34153    8706    3505  random number: 504023483
  9152   51643    7690  random number: 1880849356

$ ./jrand48.out 
     1       2       3  random number: 1898359750
 59000   43974   28966  random number: 1130126687
 61731   23903   17244  random number: -1485464893
  7666   39619   42869  random number: 1806674195
 11285   43283   27567  random number: 100798496
 41724    4128    1538  random number: -1011418973
 52567   63651   50102  random number: -32455058
 38934   50798   65040  random number: 229712386
 34153    8706    3505  random number: 504023483
  9152   51643    7690  random number: 1880849356
**/