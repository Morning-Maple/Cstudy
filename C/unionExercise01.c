#include <stdio.h>

#define TOTAL 2     //定义下面结构体数组有多少个人

//也可以用以下类型来定义，记得要把结构体内的的注释掉
/*
union MYUNION{
    float score;
    char course[20];
}
*/

//定义了一个结构体Person
struct Person{
    char name[20];  //name
    int num;    //编号
    char sex;   //性别 f=>女 m=>男
    char profession;    //职员 s=>学生 t=>老师
    union{
        float score;
        char course[20];
    }sc;    //sc是一个共用体变量
    //union MYUNION sc; //配套最上面使用
};

void main(){
    int i;
    struct Person persons[TOTAL];   //定义了一个结构体数组
    //输入人员信息
    for( i = 0; i < TOTAL; i++){
        printf("Input info:");
        scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
        if (persons[i].profession == 's'){
            printf("请输入学生的成绩:");
            scanf("%f", &persons[i].sc.score);  //如果是学生
        }else{
            printf("请输入老师的任课:");
            scanf("%s", &persons[i].sc.course); //如果是老师
        }
        fflush(stdin);  //刷新输入
    }
    //输出人员信息
    printf("\nName\t\tNum\tSex\tProfession\tScore/Course\n");
    for( i = 0; i < TOTAL; i++){
        if(persons[i].profession == 's'){
            printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.score);
        }else{
            printf("%s\t\t%d\t%c\t%c\t\t%s\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.course);
        }
    }
}