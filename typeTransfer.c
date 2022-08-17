//数据精度高到低为：
//short, int, unsigned int, long, unsigned long, float, double, long double......

////数据类型自动转换表：
//高级：double←---float
//      long
//      unsigned
//低级：int←---char, short
//横竖在同一条可以越级转化，如int可以直接转换为double，但是不能转换为float

//
////低精度转高精度，类型提升，高精度转低精度，丢失尾部精度。
//


#include <stdio.h>

void main(){
    char c1 = 'a';
    int num1 = c1;
    double d1 = num1;
    printf("c1=%c,num1=%d,d1=%lg\n", c1, num1, d1);
//表示给字符串类型变量c1赋值字符a，给整型变量num1赋值c1（即赋值字符a），再给双精度类型变量d1
//赋值num1（即给d1赋值字符a）

//混合计算
////如果有多种类型的数据混合运算，系统自动先把全部数据转换为精度大的再进行计算
    int g1 = 10;
    short g2 = 20;
    int num3 = g1 + g2;
    printf("num3=%d\n", num3);
//此处会把short转为int后再进行运算

////若两种类型字节数不同，转换后为字节大的类型，若字节数相同，但一类有符号，一类无符号，则转换为无符号类型



//精度损失
    float f1 = 1.1f;
    double d2 = 4.8989896765;
    f1 = d2;    //此处会出现精度损失（double -> float）
    printf("f1=%.6f", f1);  //期望：4.898989    ;实际：4.898990

}