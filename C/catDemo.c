#include <stdio.h>

void main(){
    //������
    //è��������Ա�����������
    //���ýṹ��

    //�����ṹ��cat���ṹ����һ���������ͣ��������еĹ������ͣ�
    struct Cat{ //�ṹ������Cat��Cat�������Լ������һ����������
        char* name; //���֣�ָ�룬ָ��һ���ַ���
        int age;    //����
        char* color;    //��ɫ��ָ�룬ָ��һ���ַ���
    };
    //ʹ��Cat�ṹ�崴������
    struct Cat cat1;    //cat1��struct Cat��һ������
    struct Cat cat2;    //cat2��struct Cat��һ������
    //��cat1�ĸ�����Ա��ֵ
    cat1.name = "С��";
    cat1.age = 3;
    cat1.color = "��";

    //��cat2�ĸ�����Ա��ֵ
    cat2.name = "С��";
    cat2.age = 5;
    cat2.color = "��";

    //�����ֻè��Ϣ
    printf("\n ��һֻè:name=%s, age=%d, color=%s", cat1.name, cat1.age, cat1.color);
    printf("\n �ڶ�ֻè:name=%s, age=%d, color=%s", cat2.name, cat2.age, cat2.color);
}