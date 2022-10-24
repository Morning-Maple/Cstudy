#include <stdio.h>
#include <string.h>

struct Visitor{
    char name[10];
    int age;
    double pay;
};

void ticket(struct Visitor *visitor){
    if((*visitor).age > 18){
        (*visitor).pay = 20;
    }else{
        (*visitor).pay = 0;
    }
}

void main(){
    struct Visitor visitor;
    while(1){
        printf("\n请输入名字：");
        scanf("%s", visitor.name);
        if(!strcmp("n", visitor.name)){
            break;
        }
        
        printf("\n请输入年龄：");
        scanf("%d", &visitor.age);

        ticket(&visitor);
        printf("\n该游客应付票价=%.2f", visitor.pay);
    }
    printf("退出程序！");
}