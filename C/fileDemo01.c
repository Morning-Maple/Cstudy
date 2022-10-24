#include <stdio.h>

int main(){
    int c;
    printf("Enter a value:");
    c = getchar();  //读取一个char，并且返回为一个int

    printf("\nYou entered:");
    putchar(c); //屏幕上显示，输出
    printf("\n");
    return 0;
}