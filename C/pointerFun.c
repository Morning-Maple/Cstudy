#include <stdio.h>

int max(int a, int b);

int main(){
    int x, y, maxVal;
    //����ָ��
    //����ָ��������pmax
    //int��ʾ�ú���ָ��ָ��ĺ����Ƿ���int����
    //(int , int)��ʾ�ú���ָ��ָ��ĺ����β��ǽ�������int
    //Ҫע���������ָ�����е�ַ��
    //�ڶ��庯��ָ��ʱ��Ҳ����д�β��������Բ���ָ��ĺ����β������ߴ��ݵı�������ͬ�����磺int (*pmax)(int i, int j) = max;
    //�����Ϊ�������е�ַ��pmax����ָ�뱣����max�����ĵ�ַ//
    int (*pmax)(int, int) = max;
    printf("Input two numbers:");
    scanf("%d%d", &x, &y);
    maxVal = (*pmax)(x,y);  //ͨ������ָ��ȥ���ò�������*pmax-->max
    //������*pmaxȡ���˺���max���׵�ַ
    //maxVal = max(x,y);
    printf("Max value = %d\n", maxVal);
    printf("pmax����ĵ�ַ:%p,pmax����ĵ�ַ:%p", pmax, &pmax);
    return 0;
}

int max(int a,int b){   //Max��������������int������ֵ���
    return a>b ? a:b;
}