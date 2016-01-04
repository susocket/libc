/**
 * int random(void);
 * rand()会返回一随机数值，范围在0至RAND_MAX之间。在调用此函数产生随机数
 * 之前，必须先用srandom()设置随机数种子，如果没有设置随机数种子，random()
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
        j = 1 + (int)(10.0 * random() / (RAND_MAX + 1.0));
        printf("%d  ", j);
    }
    printf("\n");
}

/**
$ ./random.out 
9  4  8  8  10  2  4  8  3  6  

$ ./random.out 
9  4  8  8  10  2  4  8  3  6

结果与rand()相同。
**/