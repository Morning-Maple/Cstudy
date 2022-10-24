#include <stdio.h>

int *func(){
    static int n = 100;    //局部变量
    return &n;
}

int main(){
    int *p = func();    //func返回指针
    int n;
    n = *p;
    printf("\n value = %d \n", n); //所以最后不一定能输出100
    return 0;
}