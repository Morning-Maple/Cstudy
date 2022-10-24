#include <stdio.h>
#include <stdlib.h>

int *random1(){
    static int arr[10]; //让arr的空间在静态数据区保存
    for(int i = 0; i < 10; i++){
        arr[i] = rand();
    }
    return arr;
}

void main(){
    int *p;
    p = random1();  //p指向在random1生成的数组的首地址（即第一个元素的地址）
    for(int i = 0; i < 10; i++){
        printf("\n%d",*(p+i));
    }
}