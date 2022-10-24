#include <stdio.h>

int max(int a, int b);

int main(){
    int x, y, maxVal;
    //函数指针
    //函数指针名字是pmax
    //int表示该函数指针指向的函数是返回int类型
    //(int , int)表示该函数指针指向的函数形参是接收两个int
    //要注意这个函数指针是有地址的
    //在定义函数指针时，也可以写形参名（可以不与指向的函数形参名或者传递的变量名相同），如：int (*pmax)(int i, int j) = max;
    //简单理解为：本身有地址的pmax函数指针保存了max函数的地址//
    int (*pmax)(int, int) = max;
    printf("Input two numbers:");
    scanf("%d%d", &x, &y);
    maxVal = (*pmax)(x,y);  //通过函数指针去调用参数，即*pmax-->max
    //类似于*pmax取到了函数max的首地址
    //maxVal = max(x,y);
    printf("Max value = %d\n", maxVal);
    printf("pmax保存的地址:%p,pmax本身的地址:%p", pmax, &pmax);
    return 0;
}

int max(int a,int b){   //Max函数，接收两个int，返回值大的
    return a>b ? a:b;
}