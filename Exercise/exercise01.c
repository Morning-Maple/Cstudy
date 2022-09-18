//转义字符练习
#include <stdio.h>

void main(){
    printf("姓名\t年龄\t成绩\t性别\t爱好\nXX\tXX\tXX\tXX\tXX");
    printf("\n====================\n");
    char name[10] = "欸嘿";
    short age = 23;
    float score = 88.5;
    char gender = 'M';
    char hobby[20] = "玩，玩，玩";
    printf("姓名\t年龄\t成绩\t性别\t爱好\n %s\t %d\t\t %.2f \t%c \t%s", name, age, score, gender, hobby);
}