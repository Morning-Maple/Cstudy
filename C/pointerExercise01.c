#include <stdio.h>

const int MAX = 4;

int main(){
    char *books[] = {"西游记","水浒传","红楼梦","三国演义"};

    for(int i = 0; i < MAX; i++){
        printf("Value of var[%d] = %s\n", i, books[i]); //字符串本身就是地址，不用*books[]
    }
}