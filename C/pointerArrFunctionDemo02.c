#include <stdio.h>

//��������
double getAverage(int *arr, int size);
double getAverage2(int *arr, int size);

int main(){
    int balance[5] = {1000,2,3,17,50};  //����������Ԫ�ص�int����
    double avg;
    avg = getAverage(balance, 5);  //������һ��ָ�������ָ����Ϊ����
    printf("Average value is: %f\n", avg);
    return 0;
}

double getAverage(int *arr, int size){  //�±����
    int i, sum = 0;
    double avg;
    for( i = 0; i < size; i++){
        sum += arr[i];  //�����±�����
        printf("\n arr��ŵĵ�ַ=%p", arr); //���ı�arr�ĵ�ַ��ֻ���±�����޸�
    }
    avg = (double)sum / size;
    return avg;
}

double getAverage2(int *arr, int size){ //ָ�����
    int i, sum = 0;
    double avg;
    for( i = 0; i < size; i++){
        sum += *arr;    //��ַ����
        printf("\n arr��ŵĵ�ַ=%p", arr);
        arr++;  //ָ����������㣬���arr��ŵĵ�ַ���޸�
        //arr[0] = arr + 0
        //arr[1] = arr + 1��int���ֽڣ�4��
        //arr[2] = arr + 2��int���ֽڣ�8��
    }
    avg = (double)sum / size;
    return avg;
}