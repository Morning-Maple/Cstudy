//加减乘除取余练习
#include <stdio.h>

void main(){
    int n1 = 10;
    int n2 = 3;
    int sum = n1 + n2;  //加
    int sub = n1 - n2;  //减
    int mul = n1 * n2;  //乘
    int div = n1 / n2;  //除
    int mod = n1 % n2;  //取余

    printf("\nn1=%d \nn2=%d \nsum=%d \nsub=%d \nmul=%d \nmul=%d \ndiv=%d \nmod=%d",n1, n2, sum, sub, mul, div, mod);

}