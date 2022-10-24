#include <stdio.h>

void main(){
    int map[3][3] = {{0,0,1},{1,1,1},{1,1,3}};
    //遍历
    //先得到行
    //1.sizeof(map) 得到这个map数组的大小,9int * 4(int字节) =36
    //2.sizeof(map[0]) 得到map中，第一行有多大,3int * 4(int字节) = 12
    int rows = sizeof(map) / sizeof(map[0]);    //36/12=3
    //printf("rows=%d", rows);

    //再得到列
    int cols = sizeof(map[0]) / sizeof(map[0][0]);  //sizeof(map[0][0])可用sizeof(int)代替

    //输出
    for(int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("a[%d][%d] = %d  ", i, j ,map[i][j]);
        }
    printf("\n");
    }
}