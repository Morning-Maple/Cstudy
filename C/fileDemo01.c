#include <stdio.h>

int main(){
    int c;
    printf("Enter a value:");
    c = getchar();  //��ȡһ��char�����ҷ���Ϊһ��int

    printf("\nYou entered:");
    putchar(c); //��Ļ����ʾ�����
    printf("\n");
    return 0;
}