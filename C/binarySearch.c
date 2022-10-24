#include <stdio.h>

int binarySearch(int arr[], int leftIndex, int rightIndex, int findVal){
    //���leftInde > rightIndex,˵��������鶼�ȽϹ���û�н��
    if(leftIndex > rightIndex){
        return -1;
    }
    
    //���ҵ��м����
    int midIndex = (leftIndex + rightIndex)/2;  //��ʱleftIndex=0,rightIndex=5,�����Ϊ2�����ȶ�ʧ��
    int midVal = arr[midIndex]; //arr[2]=10
    //���бȽ�
    if(midVal > findVal){   //���midVal > findVal��˵��Ҫ��midVal����߲���
        binarySearch(arr, leftIndex, midIndex-1, findVal);
    }else if(midVal < findVal){ //���midVal < findVal��˵��Ҫ��midVal���ұ߲���
        binarySearch(arr, midIndex+1, rightIndex, findVal);
    }else{
        return midIndex;    //���ظ������±�
    }
}

void main(){
    int arr[] = {1, 8, 10, 89, 1000, 1234};
    int arrLen = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr, 0, arrLen-1, 89);
    if(index != -1){
        printf("index = %d", index);
    }else{
        printf("û���ҵ�");
    }
}