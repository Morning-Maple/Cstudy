#include <stdio.h>
#include <time.h>

void test(){    //����test�������������ѵ�ʱ��
    int i = 0;
    int sum = 0;
    int j = 0;
    for(i=0;i<7777777;i++){
        sum = 0;
        for(j=0;j<100;j++){
            sum +=j;
        }
    }
}

int main(){
    //�õ�testִ��ǰ��ʱ��
    time_t start_t, end_t;
    double diff_t;  //���ʱ���
    printf("����\n");
    time(&start_t); //��ʼ���õ���ǰʱ��
    test(); //testִ��
    //�õ�testִ�к��ʱ��
    time(&end_t);   //�õ�����ǰʱ��
    diff_t = difftime(end_t, start_t);  //ʱ���
    printf("ִ��test��������%.6f��", diff_t);
}