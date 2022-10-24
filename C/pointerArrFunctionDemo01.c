#include <stdio.h>

//函数写在main前就不用声明，写在main后就需要在前面声明
void test2(int *p); //函数声明，接收int *

void main(){
    int num = 90;
    int *p = &num;      //把num地址赋值给p
    test2(&num);    //传地址
    printf("\n main()中的num=%d", num);
    test2(p);   //传指针
    printf("\n main()中的num=%d", num);
}

void test2(int *p){
    *p += 1;
}