#include <stdio.h>

union data{ //data��һ�������壬����������Ա
    int n;
    char ch;
    short m;
};  //�����ϣ�nռ4���ֽڣ�chռ1���ֽڣ�shortռ2���ֽڣ�������ӦΪ7�ֽڣ����������������a�Ĵ�С��int��ͬ��Ϊ4���ֽ�
//���ǹ������ݿռ䣬���ÿռ�Ĵ�С��ռ�����ĳ�ԱΪ׼(�˴�Ϊ4�ֽ�)

void main(){
    union data a;   //����һ�����������a
    printf("%d,%d\n", sizeof(a), sizeof(union data));   //4��4
    a.n = 0x40;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
}