#include <stdio.h>

void main(){
    int a[4][6];    //表示一个4行6列的二维数组，此时数组里面全是垃圾值，需要初始化
    int i, j;
    for(i = 0; i < 4; i++){ //进行初始化，全部赋值为0
        for (j = 0; j < 6; j++){
            a[i][j] = 0;
        }
    }
    a[1][2] = 1;
    a[2][1] = 2;
    a[2][3] = 3;
    for(i = 0; i < 4; i++){ //输出二维数组
        for (j = 0; j < 6; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    //康康二维数组的内存布局叭
    printf("\n二维数组a的首地址=%p", a);
    printf("\n二维数组a[0]的地址=%p", a[0]);    //a代表整个数组的本身，存放的是地址，a[0]是第一行，也是地址
    printf("\n二维数组a[0][0]的地址=%p", &a[0][0]); //这个和下面一个都是存放了值，要加取地址符
    printf("\n二维数组a[0][1]的地址=%p", &a[0][1]);
    //输出二维数组的各个元素的地址
    printf("\n");
    for(i = 0; i < 4; i++){
        printf("a[%d]的地址=%p\n", i, a[i]);
        for (j = 0; j < 6; j++){
            printf("a[%d][%d]的地址=%p\n", i, j, &a[i][j]);
        }
        printf("\n");
    }
}