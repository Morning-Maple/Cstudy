#include <stdio.h>

int main(){
    char str[100];  //定义一个字符串数组
    printf("输入的字符串:");
    gets(str);

    printf("\n您输入的字符串为:");
    puts(str);
    return 0;
}