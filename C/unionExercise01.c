#include <stdio.h>

#define TOTAL 2     //��������ṹ�������ж��ٸ���

//Ҳ�������������������壬�ǵ�Ҫ�ѽṹ���ڵĵ�ע�͵�
/*
union MYUNION{
    float score;
    char course[20];
}
*/

//������һ���ṹ��Person
struct Person{
    char name[20];  //name
    int num;    //���
    char sex;   //�Ա� f=>Ů m=>��
    char profession;    //ְԱ s=>ѧ�� t=>��ʦ
    union{
        float score;
        char course[20];
    }sc;    //sc��һ�����������
    //union MYUNION sc; //����������ʹ��
};

void main(){
    int i;
    struct Person persons[TOTAL];   //������һ���ṹ������
    //������Ա��Ϣ
    for( i = 0; i < TOTAL; i++){
        printf("Input info:");
        scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
        if (persons[i].profession == 's'){
            printf("������ѧ���ĳɼ�:");
            scanf("%f", &persons[i].sc.score);  //�����ѧ��
        }else{
            printf("��������ʦ���ο�:");
            scanf("%s", &persons[i].sc.course); //�������ʦ
        }
        fflush(stdin);  //ˢ������
    }
    //�����Ա��Ϣ
    printf("\nName\t\tNum\tSex\tProfession\tScore/Course\n");
    for( i = 0; i < TOTAL; i++){
        if(persons[i].profession == 's'){
            printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.score);
        }else{
            printf("%s\t\t%d\t%c\t%c\t\t%s\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.course);
        }
    }
}