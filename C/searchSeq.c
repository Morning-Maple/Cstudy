#include <stdio.h>

int seqSearch(int arr[], int arrLen, int val){  //定义一个数组，一个数组长度，目标值
    for (int i = 0; i < arrLen; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;  //找不到则返回-1
}

void main(){
    int arr[] = {23, 1, 34, 89, 101};
    int arrLen = sizeof(arr)/sizeof(int);
    int index = seqSearch(arr, arrLen, -101);
    if(index != -1){
        printf("找到，下标为%d", index);
    }else{
        printf("错误，没有找到");
    }
    
}