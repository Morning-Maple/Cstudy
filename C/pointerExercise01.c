#include <stdio.h>

const int MAX = 4;

int main(){
    char *books[] = {"���μ�","ˮ䰴�","��¥��","��������"};

    for(int i = 0; i < MAX; i++){
        printf("Value of var[%d] = %s\n", i, books[i]); //�ַ���������ǵ�ַ������*books[]
    }
}