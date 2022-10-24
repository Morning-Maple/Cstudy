#include <stdio.h>

void main(){
    int arr[] = {0,1,-2,89,400};
    int arrLen = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int j = 0;
    for (int i = 1; i < arrLen; i++){
        if (arr[i]>max){
            max = arr[i];
            j = i;
        }
    }
    printf("max=%d,ÏÂ±êÎª£º%d", max, j);
}