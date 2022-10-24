#include <stdio.h>

//函数声明
double getAverage(int *arr, int size);
double getAverage2(int *arr, int size);

int main(){
    int balance[5] = {1000,2,3,17,50};  //定义带有五个元素的int数组
    double avg;
    avg = getAverage(balance, 5);  //传递以一个指向数组的指针作为参数
    printf("Average value is: %f\n", avg);
    return 0;
}

double getAverage(int *arr, int size){  //下标遍历
    int i, sum = 0;
    double avg;
    for( i = 0; i < size; i++){
        sum += arr[i];  //数组下标运算
        printf("\n arr存放的地址=%p", arr); //不改变arr的地址，只对下标进行修改
    }
    avg = (double)sum / size;
    return avg;
}

double getAverage2(int *arr, int size){ //指针遍历
    int i, sum = 0;
    double avg;
    for( i = 0; i < size; i++){
        sum += *arr;    //地址运算
        printf("\n arr存放的地址=%p", arr);
        arr++;  //指针的自增运算，会对arr存放的地址做修改
        //arr[0] = arr + 0
        //arr[1] = arr + 1个int的字节（4）
        //arr[2] = arr + 2个int的字节（8）
    }
    avg = (double)sum / size;
    return avg;
}