#include <stdio.h>
#include <string.h>

void main(){
    char src[50], dest[50];
    char* str = "abcdef";
    printf("str.len=%d",strlen(str));   //ͳ���ַ�����С
    strcpy(src, "hello");   //��hello������src��abcdef��hello����
    strcpy(dest, "���");   //����ÿ�����dest
    strcat(dest ,src);  //��src������dest����
    printf("\n�����ַ���Ϊ��|%s|",dest);
}