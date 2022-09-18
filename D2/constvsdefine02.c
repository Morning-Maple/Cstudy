#include <stdio.h>

#define DEBUG

void main(){
    #ifdef DEBUG
        printf("调试信息"); //如果存在定义DEBUG，就执行这条语句
    #endif
    #ifndef DEBUG
        printf("这是另一条调试信息");   //否则执行这条语句
    #endif
}
//颜色明亮可以看出代码会怎样执行