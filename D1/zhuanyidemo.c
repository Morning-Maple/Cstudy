#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("姓名\t年龄\t性别\n");   //其中\t表示一个tab的间距，相当于四个空格   
    printf("编号一\n编号二\n编号三\n"); //其中\n表示换行
    printf("\\,\",\'\n"); //输出特殊符号时，需要在此前加\以用于区分
    printf("你好我是张三\n");   //正常输出语句
    //把\r后的内容放到输出语句的最前面,但是VSCODE中\r=\n，切记
    printf("你好\r我是\r张三"); 
}