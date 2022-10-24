#include <stdio.h>

int binarySearch(int arr[], int leftIndex, int rightIndex, int findVal){
    //如果leftInde > rightIndex,说明这个数组都比较过，没有结果
    if(leftIndex > rightIndex){
        return -1;
    }
    
    //先找到中间的数
    int midIndex = (leftIndex + rightIndex)/2;  //此时leftIndex=0,rightIndex=5,最后结果为2（精度丢失）
    int midVal = arr[midIndex]; //arr[2]=10
    //进行比较
    if(midVal > findVal){   //如果midVal > findVal，说明要在midVal的左边查找
        binarySearch(arr, leftIndex, midIndex-1, findVal);
    }else if(midVal < findVal){ //如果midVal < findVal，说明要在midVal的右边查找
        binarySearch(arr, midIndex+1, rightIndex, findVal);
    }else{
        return midIndex;    //返回改数的下标
    }
}

void main(){
    int arr[] = {1, 8, 10, 89, 1000, 1234};
    int arrLen = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr, 0, arrLen-1, 89);
    if(index != -1){
        printf("index = %d", index);
    }else{
        printf("没有找到");
    }
}