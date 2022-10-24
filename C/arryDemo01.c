#include <stdio.h>
void main(){
    double arr[5];
    int arrLen = sizeof(arr)/sizeof(double);
    int i = 0;
    for (i=0; i < arrLen; i++){
        printf("\n 请输入一个数：");
        scanf("%lf", &arr[i]);
    }
    
    printf("\n==============================\n");
    for (i = 0; i < arrLen; i++){
        printf("arr[%d]=%.2f\n", i, arr[i]);
    }
    
}