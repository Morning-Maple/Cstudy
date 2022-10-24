#include <stdio.h>

double cal(double x, double y, char oper){
    double res = 0.0;
    switch (oper)
    {
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    case '*':
        res = x * y;
        break;
    case '/':
        res = x / y;
        break;
    default:
        printf("输入了错误的符号！");
        break;
    }
    return res;
}

double main(){
    double x=10 , y=9;
    char oper='+';
    double res = 0.0;
    // printf("请输入第一个数：");
    // scanf("%.2f", &x);
    // printf("请输入第二个数：");
    // scanf("%.2f", &y);
    // printf("请输入运算符：");
    // scanf("%c", oper);
    res = cal(x, y, oper);
    printf("最后结果是：%.2f", res);
    return res;
}