#include <stdio.h>

void main(){
    int map[3][3] = {{0,0,1},{1,1,1},{1,1,3}};
    //����
    //�ȵõ���
    //1.sizeof(map) �õ����map����Ĵ�С,9int * 4(int�ֽ�) =36
    //2.sizeof(map[0]) �õ�map�У���һ���ж��,3int * 4(int�ֽ�) = 12
    int rows = sizeof(map) / sizeof(map[0]);    //36/12=3
    //printf("rows=%d", rows);

    //�ٵõ���
    int cols = sizeof(map[0]) / sizeof(map[0][0]);  //sizeof(map[0][0])����sizeof(int)����

    //���
    for(int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            printf("a[%d][%d] = %d  ", i, j ,map[i][j]);
        }
    printf("\n");
    }
}