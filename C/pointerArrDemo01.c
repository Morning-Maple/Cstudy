#include <stdio.h>

int main(){
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;     //��var�����ĵ�ַ��ֵ��ptr
    pptr = &ptr;    //��ptr��ŵĵ�ַ��ֵ��pptr
    printf("var�ĵ�ַ=%p var=%d\n", &var, var);
    printf("ptr����ĵ�ַ=%p ptr��ŵĵ�ַ=%p ptr=%d\n", &ptr, ptr, *ptr);
    printf("pptr����ĵ�ַ=%p pptr��ŵĵ�ַ=%p pptr=%d\n", &pptr, pptr, **pptr);
    return 0;
}