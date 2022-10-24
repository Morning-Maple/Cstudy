#include <stdio.h>

void main(){
    int arr[3][3] = {{4,6},{1,4},{-2,8}};
    int sum = 0;
    //遍历
    //先得到行
    //1.sizeof(arr) 得到这个arr数组的大小,9int * 4(int字节) =36
    //2.sizeof(arr[0]) 得到arr中，第一行有多大,3int * 4(int字节) = 12
    int rows = sizeof(arr) / sizeof(arr[0]);    //36/12=3
    //printf("rows=%d", rows);

    //再得到列
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);  //sizeof(arr[0][0])可用sizeof(int)代替

    //输出
    for(int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            sum += arr[i][j];   //累加
        }
    }
    printf("sum = %d", sum);
}