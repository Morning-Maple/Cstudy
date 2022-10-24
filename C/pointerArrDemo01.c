#include <stdio.h>

int main(){
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;     //把var变量的地址赋值给ptr
    pptr = &ptr;    //把ptr存放的地址赋值给pptr
    printf("var的地址=%p var=%d\n", &var, var);
    printf("ptr本身的地址=%p ptr存放的地址=%p ptr=%d\n", &ptr, ptr, *ptr);
    printf("pptr本身的地址=%p pptr存放的地址=%p pptr=%d\n", &pptr, pptr, **pptr);
    return 0;
}