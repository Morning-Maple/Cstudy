#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 10; //定义变量a为整数型变量
    float b = 1.0;  //定义变量b为浮点数型变量
    double c = 2.0; //定义变量c为双精度浮点数型变量
    char d = 'A';    /*定义变量d为字符型变量（注意，非字符串变量！！！）且用单引号，
    同时也可以使用ASCII来输出字符，如97=a，但此时需要占位符%c*/
    char e = 97;
    printf("d=%c,e=%c\n", d,e);
    //其中相同类型之间的变量的值可以进行算术运算，包括字符类型
    //不同类型之间的变量的值有可能可以进行算术运算，但是可能会丢失数据
    //例如int变量和float变量！
    char f = 'a';
    int g = 1 + f;
    printf("g=%c", g);
}

/*
数据类型和占位符之间的关系
char和unsingned char  == %c
short  == %hd
unsigned short  == %hu
long  == %ld
unsigned long  == %lu
int  == %d
unsigned int  == %u
float  == %f or %g
double  == %lf or %lg

*/