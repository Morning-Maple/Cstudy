//布尔类型判断奇偶
#include <stdio.h>

void main(){
    int num = 11;
    if(num % 2 == 0){
        printf("\n%d是偶数",num);   //符合条件才执行这句语句
    }else{
        printf("\n%d是奇数",num);
    }
}