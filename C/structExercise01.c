#include <stdio.h>

//����һ��Dog�ṹ��
struct Dog{
    char* name;
    int age;
    double weight;
};

//say����
char *say(struct Dog dog){
    //����Ϣ����һ���ַ�����/�ַ�����
    static char info[50];   //��ҪΪ�ֲ���̬����
    sprintf(info, "name=%s age=%d weight=%.2f", dog.name, dog.age, dog.weight);
    dog.name = "С��";  //����Ӱ�죬��Ϊ�Ƿ���info����Ϣ���޸�Dog�ṹ��dog�����ĸ�����Ӱ������������
    return info;
}

void main(){
    //����ṹ�����
    struct Dog dog;
    char *info = NULL;
    dog.name = "���";
    dog.age = 1;
    dog.weight = 3.4;
    info = say(dog);    //�ṹ�������Ĭ��ֵ���ݣ������ַ���ݣ�
    printf("\nС����Ϣ:%s", info);
    printf("\nmainС������=%s", dog.name);
}