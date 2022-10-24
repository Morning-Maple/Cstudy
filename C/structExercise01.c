#include <stdio.h>

//定义一个Dog结构体
struct Dog{
    char* name;
    int age;
    double weight;
};

//say函数
char *say(struct Dog dog){
    //把信息放入一个字符数组/字符串中
    static char info[50];   //需要为局部静态变量
    sprintf(info, "name=%s age=%d weight=%.2f", dog.name, dog.age, dog.weight);
    dog.name = "小花";  //不会影响，因为是返回info的信息，修改Dog结构体dog变量的副本不影响最终输出结果
    return info;
}

void main(){
    //定义结构体变量
    struct Dog dog;
    char *info = NULL;
    dog.name = "你好";
    dog.age = 1;
    dog.weight = 3.4;
    info = say(dog);    //结构体变量是默认值传递（区别地址传递）
    printf("\n小狗信息:%s", info);
    printf("\nmain小狗名字=%s", dog.name);
}