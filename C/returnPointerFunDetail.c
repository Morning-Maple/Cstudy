#include <stdio.h>

int *func(){
    static int n = 100;    //�ֲ�����
    return &n;
}

int main(){
    int *p = func();    //func����ָ��
    int n;
    n = *p;
    printf("\n value = %d \n", n); //�������һ�������100
    return 0;
}