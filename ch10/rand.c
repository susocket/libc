/**
 * int rand(void);
 * rand()会返回一随机数值，范围在0至RAND_MAX之间。在调用此函数产生随机数
 * 之前，必须先用srand()设置随机数种子，如果没有设置随机数种子，rand()
 * 在调用时会自动设随机数种子为1.
 *
 * 返回值：0至RAND_MAX之间的随机数值，RAND_MAX定义在stdlib.h，其值为
 * 2147483647.
 **/

#include <stdlib.h>
#include <stdio.h>

void main(){
    int i, j;
    for(i = 0; i < 10; i++){
        j = 1 + (int)(10.0 * rand() / (RAND_MAX + 1.0));
        printf("%d  ", j);
    }
    printf("\n");
}

/**
$ ./rand.out 
9  4  8  8  10  2  4  8  3  6  

$ ./rand.out 
9  4  8  8  10  2  4  8  3  6  

$ ./rand.out 
9  4  8  8  10  2  4  8  3  6

注：此程序实例获取1-10之间的随机数值，事前没设种子，正确做法见srand().
**/