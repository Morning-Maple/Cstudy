#include <stdio.h>
#include <string.h>

void bubble(int arr[], int len){
    int temp = 0;   //临时变量
    for(int j = 0; j<len ;j++){ //外部循环，决定进行几轮排序

        for (int i = 0; i < len-j; i++){    //内部循环，排序核心代码
            
            if (arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < len+1; i++){
        printf("%d,", arr[i]);
    }
}

void main(){
    int arr1[] = {3,9,-1,10,-2};
    int len = sizeof(arr1)/sizeof(int) -1;   //数组长度
    bubble(arr1, len);
}