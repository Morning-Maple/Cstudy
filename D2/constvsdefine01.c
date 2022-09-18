//#define简单的字符替换产生的边界效应
#include <stdio.h>

#define A 1
#define B A+3   //
#define C A/B*3 //
//分析
//C其实是 A/A+3*3=1/1+3*3=1+9=10
//并不是我们所想的B=4，C=0.75
//如果按照我们所想，需要
//#define B (A+3)
//但是此时结果为0，因为整数除以整数结果仍要为整数（在进行1/4的运算后结果为0）
//如果需要得到C=0.75，需要修改为#define A 1.0来提升计算精度


//const不能重定义，不可以定义两个一样的，而define可以通过undef取消某个符号的定义后，再重新定义
const double PI = 3.14;
//const double PI = 3.15;X

#define PI2 3.14
#undef PI2  //取消PI2的定义
#define PI2 3.15

void main(){
    printf("c=%d",C);

}