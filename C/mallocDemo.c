#include <stdio.h>
#include <stdlib.h>

int main(){
    void check(int *);  //函数声明(函数定义写在下面了，写上面就不用声明)
    int* p, i;
    //在堆中开辟了20个字节的连续空间
    //malloc(5*sizeof(int))本身返回的是void *类型，希望用int *的p来接收，所以要强转一下
    p = (int*)malloc(5*sizeof(int));    //void * ->int *[高版本会自动转换]
    for ( i = 0; i < 5; i++){   //移动地址赋值
        printf("请输入第%d个成绩：", i+1);
        scanf("%d", p + i);
    }
    check(p);   //调用栈
    free(p);    //销毁堆区p指向的空间（就是内存图内保存5个int的那个空间）
    return 0;
}

void check(int *p){
    int i;
    printf("\n不及格的成绩有：");
    for ( i = 0; i < 5; i++){
        if (p[i]<60){
            printf("%d ", p[i]);
        }
    }
}