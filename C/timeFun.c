#include <stdio.h>
#include <time.h>

void test(){    //运行test函数，求所花费的时间
    int i = 0;
    int sum = 0;
    int j = 0;
    for(i=0;i<7777777;i++){
        sum = 0;
        for(j=0;j<100;j++){
            sum +=j;
        }
    }
}

int main(){
    //得到test执行前的时间
    time_t start_t, end_t;
    double diff_t;  //存放时间差
    printf("启动\n");
    time(&start_t); //初始化得到当前时间
    test(); //test执行
    //得到test执行后的时间
    time(&end_t);   //得到到当前时间
    diff_t = difftime(end_t, start_t);  //时间差
    printf("执行test函数用了%.6f秒", diff_t);
}