#include <stdio.h>

//����
//day=10����1����
//day=9����4���ң���day10+1��*2=4
//day=8����10���ң���day9+1��*2=10
int m(int day){
    if(day == 10){
        return 1;
    }else{
        return (m(day+1)+1)*2;
    }
}

void main(){
    int x = m(1);
    printf("%d",x);
}