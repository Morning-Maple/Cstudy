#include <stdio.h>

//分析
//day=10，有1个桃
//day=9，有4个桃，（day10+1）*2=4
//day=8，有10个桃，（day9+1）*2=10
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