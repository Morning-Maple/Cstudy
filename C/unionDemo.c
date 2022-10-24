#include <stdio.h>

union data{ //data是一个共用体，包含三个成员
    int n;
    char ch;
    short m;
};  //理论上，n占4个字节，ch占1个字节，short占2个字节，理论上应为7字节，但是下面输出变量a的大小和int相同，为4个字节
//他们共有数据空间，而该空间的大小以占用最大的成员为准(此处为4字节)

void main(){
    union data a;   //定义一个共用体变量a
    printf("%d,%d\n", sizeof(a), sizeof(union data));   //4，4
    a.n = 0x40;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%d,%c,%d\n", a.n, a.ch, a.m);
}