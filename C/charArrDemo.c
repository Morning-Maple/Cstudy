#include <stdio.h>
#include <string.h>

void main(){
    char greenting[] = "Hello";
    int i;
    int len = strlen(greenting);
    printf("\nlen=%d", len);
    printf("\n�ַ����������ַ���:%c", greenting[2]);
    for (i = 0; i < len; i++){
        printf("\n%c", greenting[i]);
    }
    printf("\n%s", greenting);
}