#include <stdio.h>
#include <string.h>

char *strlong(char *str1, char *str2){  //�����˺�����һ��ָ�뺯��
    printf("\n str1�ĳ�����:%d,str2�ĳ�����:%d", strlen(str1), strlen(str2));
    if(strlen(str1) >= strlen(str2)){
        return str1;
    }else{
        return str2;
    }
}

int main(){
    char str1[30], str2[30], *str;  //str��һ��ָ�����ͣ�ָ��һ���ַ���
    printf("\n�������һ���ַ���:");
    gets(str1);
    printf("\n������ڶ����ַ���:");
    gets(str2);
    str = strlong(str1, str2);
    printf("\n Longer string:%s \n", str);
    return 0;
}