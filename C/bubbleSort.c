#include <stdio.h>
#include <string.h>

void bubble(int arr[], int len){
    int temp = 0;   //��ʱ����
    for(int j = 0; j<len ;j++){ //�ⲿѭ�����������м�������

        for (int i = 0; i < len-j; i++){    //�ڲ�ѭ����������Ĵ���
            
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
    int len = sizeof(arr1)/sizeof(int) -1;   //���鳤��
    bubble(arr1, len);
}