/**
 * void lcong48(unsigned short int param[7]);
 * 设置48位运算的随机数种子
 *
 * 函数说明：48位运算的随机数函数时根据新型调和（linear congruential）演算法
 * 来产生随机数：
 * Xn+1 = (aXn + c) mod m, (n >= 0)
 * 其中，常数a = 0x5DEECE66D， c = 0xB, m = 248。
 * seed48()可以用来改变Xi的初值（详见seed48())，但无法改变常数值。lcong48()
 * 除了可以改变初值，亦可改变a与c。参数param声明成7个unsigned short int的
 * 数组，param[0-2]为上述随机数方程序的的初值（相当于seed48()的参数seed16v[3]),
 * param[3-5]代表a值， param[6]则代表c值。
 *
 * 如果在调用lcong48()之后，又调用了srand48()或seed48()，则a与c的数值会恢复成
 * 上述默认值。
 *
 **/

#include <stdlib.h>
#include <stdio.h>

void main(){
    unsigned short int param[7] = {1, 2, 3, 11, 22,12, 20};
    int i;
    //lcong48(param);
    for(i =0; i < 10; i++){
        printf("%ld\n", lrand48());
    }
}

/**
$ ./lcong48.out 
2916374
75989575
1818405008
36170157
839018925
1994498779
761662626
1492720899
1036158607
1688394395

$ ./lcong48.out 
2916374
75989575
1818405008
36170157
839018925
1994498779
761662626
1492720899
1036158607
1688394395

//如果没有调用lcong48():
$ ./lcong48.out 
0
2116118
89401895
379337186
782977366
196130996
198207689
1046291021
1131187612
975888346

$ ./lcong48.out 
0
2116118
89401895
379337186
782977366
196130996
198207689
1046291021
1131187612
975888346

**/