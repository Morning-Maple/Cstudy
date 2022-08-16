#include <stdio.h>
#include <stdlib.h>

//宏定义
#define BOOL int
#define S 1
#define X 0


void main(){
    int a = 0;
    //0为假，非0为真
    if(a){  //如果变量为0就是假，反之为真
        printf("通过！");
        }
    else{
        printf("不过！");
        }

    //宏定义
    //有些协议需要定义写在void main函数内的最上面
    BOOL app = S;
    //上面等价于：int app = 1;
    if(app){
        printf("鉴定为真！");
    }
    else{
        printf("鉴定为假！");
    }
}

//现在可以在头文件内用#include <stdbool.h>来方便的操作布尔类型了
//此头文件定义了bool代表_Bool型，true代表1，false代表0，此_Bool型只能被赋值为0或1
//例如：bool flag = false;