#include <stdio.h>

void main(){
    FILE *fp = NULL;    //����һ���ļ�ָ��
    fp = fopen("d:/test100.txt", "w+"); //���ļ�
    //д�����ݵ��ļ���
    fprintf(fp, "��� �й�\n");
    fputs("��� ����\n", fp);
    //�ر��ļ���������������
    fclose(fp);
    printf("���");
}