#include <stdio.h>

//����д��mainǰ�Ͳ���������д��main�����Ҫ��ǰ������
void test2(int *p); //��������������int *

void main(){
    int num = 90;
    int *p = &num;      //��num��ַ��ֵ��p
    test2(&num);    //����ַ
    printf("\n main()�е�num=%d", num);
    test2(p);   //��ָ��
    printf("\n main()�е�num=%d", num);
}

void test2(int *p){
    *p += 1;
}