#include <stdio.h>
#include <stdlib.h>

int *random1(){
    static int arr[10]; //��arr�Ŀռ��ھ�̬����������
    for(int i = 0; i < 10; i++){
        arr[i] = rand();
    }
    return arr;
}

void main(){
    int *p;
    p = random1();  //pָ����random1���ɵ�������׵�ַ������һ��Ԫ�صĵ�ַ��
    for(int i = 0; i < 10; i++){
        printf("\n%d",*(p+i));
    }
}