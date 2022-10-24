#include <stdio.h>

int main(){
    FILE *fp = NULL;    //创建一个文件指针
    char buff[1024];    //定义一个缓冲区

    fp = fopen("d:/test200.txt", "r");  //打开文件
    //法1，读取文件第一行
    // fscanf(fp, "%s", buff);
    // printf("%s\n", buff);
    //法2，读取整个文件
    while(fgets(buff, 1024, fp) != NULL){   //说明：循环读取fp指向的文件内容，读取到NULL就结束
        printf("%s\n", buff);
    }
}