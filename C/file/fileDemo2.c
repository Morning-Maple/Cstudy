#include <stdio.h>

int main(){
    FILE *fp = NULL;    //����һ���ļ�ָ��
    char buff[1024];    //����һ��������

    fp = fopen("d:/test200.txt", "r");  //���ļ�
    //��1����ȡ�ļ���һ��
    // fscanf(fp, "%s", buff);
    // printf("%s\n", buff);
    //��2����ȡ�����ļ�
    while(fgets(buff, 1024, fp) != NULL){   //˵����ѭ����ȡfpָ����ļ����ݣ���ȡ��NULL�ͽ���
        printf("%s\n", buff);
    }
}