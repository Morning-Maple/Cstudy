#include <stdio.h>
#include <stdlib.h>

int main(){
    void check(int *);  //��������(��������д�������ˣ�д����Ͳ�������)
    int* p, i;
    //�ڶ��п�����20���ֽڵ������ռ�
    //malloc(5*sizeof(int))�����ص���void *���ͣ�ϣ����int *��p�����գ�����Ҫǿתһ��
    p = (int*)malloc(5*sizeof(int));    //void * ->int *[�߰汾���Զ�ת��]
    for ( i = 0; i < 5; i++){   //�ƶ���ַ��ֵ
        printf("�������%d���ɼ���", i+1);
        scanf("%d", p + i);
    }
    check(p);   //����ջ
    free(p);    //���ٶ���pָ��Ŀռ䣨�����ڴ�ͼ�ڱ���5��int���Ǹ��ռ䣩
    return 0;
}

void check(int *p){
    int i;
    printf("\n������ĳɼ��У�");
    for ( i = 0; i < 5; i++){
        if (p[i]<60){
            printf("%d ", p[i]);
        }
    }
}