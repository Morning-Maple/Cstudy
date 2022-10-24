#include <stdio.h>
#include <stdlib.h>

//回调函数
//int (*f)(void)，f是一个函数指针，它可以接收的函数是返回int，没有形参的参数
//f在这被initArray调用，充当了回调函数的角色
void initArray(int *array, int arraySize, int (*f)(void)){
    int i;
    for(i = 0; i < arraySize; i++){
        array[i] = f(); //通过函数指针调用getNextRandomValue函数，(*f)()=f()
    }
}

//获取随机值
int getNextRandomValue(void){
    return rand();  //rand系统函数，会返回一个随机整数
}

int main(){
    int myarray[10], i; //定义一个数组和int
    //说明：
    //1.调用initArray函数
    //2.传入了一个函数名getNextRandomValue（地址），需要使用函数指针来接收
    initArray(myarray, 10, getNextRandomValue);
    for ( i = 0; i < 10; i++){
        printf("%d\n", myarray[i]);
    }
    printf("\n");
    return 0;
}