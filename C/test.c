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
        printf("�����˴���ķ��ţ�");
        break;
    }
    return res;
}

double main(){
    double x=10 , y=9;
    char oper='+';
    double res = 0.0;
    // printf("�������һ������");
    // scanf("%.2f", &x);
    // printf("������ڶ�������");
    // scanf("%.2f", &y);
    // printf("�������������");
    // scanf("%c", oper);
    res = cal(x, y, oper);
    printf("������ǣ�%.2f", res);
    return res;
}