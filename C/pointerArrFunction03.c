#include <stdio.h>
#include <string.h>

char *strlong(char *str1, char *str2){  //表明此函数是一个指针函数
    printf("\n str1的长度是:%d,str2的长度是:%d", strlen(str1), strlen(str2));
    if(strlen(str1) >= strlen(str2)){
        return str1;
    }else{
        return str2;
    }
}

int main(){
    char str1[30], str2[30], *str;  //str是一个指针类型，指向一个字符串
    printf("\n请输入第一个字符串:");
    gets(str1);
    printf("\n请输入第二个字符串:");
    gets(str2);
    str = strlong(str1, str2);
    printf("\n Longer string:%s \n", str);
    return 0;
}