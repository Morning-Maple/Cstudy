#include <stdio.h>

void main(){
    int arr[3][3] = {{4,6},{1,4},{-2,8}};
    int sum = 0;
    //����
    //�ȵõ���
    //1.sizeof(arr) �õ����arr����Ĵ�С,9int * 4(int�ֽ�) =36
    //2.sizeof(arr[0]) �õ�arr�У���һ���ж��,3int * 4(int�ֽ�) = 12
    int rows = sizeof(arr) / sizeof(arr[0]);    //36/12=3
    //printf("rows=%d", rows);

    //�ٵõ���
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);  //sizeof(arr[0][0])����sizeof(int)����

    //���
    for(int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            sum += arr[i][j];   //�ۼ�
        }
    }
    printf("sum = %d", sum);
}