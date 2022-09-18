#include <stdio.h>

void main(){
    //获取int变量num的地址，并且显示到终端
    //把num的地址赋值给指针ptr，并通过ptr修改num的值（注意分析ptr的类型，取决于指针指向的变量的类型，要相对应）
    int num = 90;
    printf("num的地址为：%p,num的值为：%d\n",&num,num);
    int* ptr = &num;
    *ptr = 99;//修改了num的值
    printf("num的地址为：%p,num的值为：%d\n",&num,num);
    printf("ptr的地址为：%p,ptr的值为：%p\n",&ptr,ptr);
    /////////////////////
    //看懂下列例子，说明最后的输出结果
    int a = 300;
    int b = 400;
    int* ptr1 = &a;
    *ptr1 = 100;
    ptr1 = &b;
    *ptr1 = 200;
    printf("\n a=%d,b=%d,*ptr1=%d", a, b, *ptr1);
}