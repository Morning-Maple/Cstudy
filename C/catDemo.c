#include <stdio.h>

void main(){
    //分析：
    //猫有三个成员（变量）组成
    //采用结构体

    //创建结构体cat（结构体是一种数据类型，属于其中的构造类型）
    struct Cat{ //结构体名：Cat，Cat是我们自己构造的一个数据类型
        char* name; //名字，指针，指向一个字符串
        int age;    //年龄
        char* color;    //颜色，指针，指向一个字符串
    };
    //使用Cat结构体创建变量
    struct Cat cat1;    //cat1是struct Cat的一个变量
    struct Cat cat2;    //cat2是struct Cat的一个变量
    //给cat1的各个成员赋值
    cat1.name = "小白";
    cat1.age = 3;
    cat1.color = "白";

    //给cat2的各个成员赋值
    cat2.name = "小花";
    cat2.age = 5;
    cat2.color = "花";

    //输出俩只猫信息
    printf("\n 第一只猫:name=%s, age=%d, color=%s", cat1.name, cat1.age, cat1.color);
    printf("\n 第二只猫:name=%s, age=%d, color=%s", cat2.name, cat2.age, cat2.color);
}