#include <stdio.h>

int seqSearch(int arr[], int arrLen, int val){  //����һ�����飬һ�����鳤�ȣ�Ŀ��ֵ
    for (int i = 0; i < arrLen; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;  //�Ҳ����򷵻�-1
}

void main(){
    int arr[] = {23, 1, 34, 89, 101};
    int arrLen = sizeof(arr)/sizeof(int);
    int index = seqSearch(arr, arrLen, -101);
    if(index != -1){
        printf("�ҵ����±�Ϊ%d", index);
    }else{
        printf("����û���ҵ�");
    }
    
}