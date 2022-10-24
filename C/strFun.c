#include <stdio.h>
#include <string.h>

void main(){
    char src[50], dest[50];
    char* str = "abcdef";
    printf("str.len=%d",strlen(str));   //统计字符串大小
    strcpy(src, "hello");   //把hello拷贝到src，abcdef被hello覆盖
    strcpy(dest, "你好");   //把你好拷贝到dest
    strcat(dest ,src);  //把src连接在dest后面
    printf("\n最终字符串为：|%s|",dest);
}