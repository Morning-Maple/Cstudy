#include <stdio.h>

void main(){
    FILE *fp = NULL;    //创建一个文件指针
    fp = fopen("d:/test100.txt", "w+"); //打开文件
    //写入内容到文件中
    fprintf(fp, "你好 中国\n");
    fputs("你好 世界\n", fp);
    //关闭文件！！！！！！！
    fclose(fp);
    printf("完毕");
}