//指针入门
#include <stdio.h>

void main()
{
    int num = 5;
    int* ptr = &num;
    //%p表示输出变量的地址的格式
    //&num表示取出变量num的地址
    printf("num的数值=%d num的地址=%p\n", num, &num);
    //输出的结果为：：num的数值=1，num的地址=0000000000B25170
    //地址是一个十六进制数

    //每次运行的地址都会被重新分配
    //学会看/画内存图
    //图为1

    // int * 表示变量prt类型为一个int类型指针
    //变量prt指向了int类型的变量num的地址
    //指针变量本身也有地址
    //解释说明
    //&ptr:输出int型指针变量ptr的地址
    //ptr:输出int型指针变量ptr保存的地址
    //*ptr:输出int型指针变量ptr保存的地址的值
    printf("ptr的地址=%p ptr存放的值是一个地址=%p ptr指向的值=%d", &ptr, ptr, *ptr);
}