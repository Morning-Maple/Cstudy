#include <stdio.h>

struct Box{
    double x;
    double y;
    double z;
};

// void volume(struct Box *box){
//     double vol;
//     vol = (*box).x * (*box).y * (*box).z;
//     printf("��������������Ϊ:%.2f", vol);
// }

// void main(){
//     struct Box box;
//     printf("������������ĳ�:");
//     scanf("%lf", &box.x);
//     getchar();
//     printf("������������Ŀ�:");
//     scanf("%lf", &box.y);
//     getchar();
//     printf("������������ĸ�:");
//     scanf("%lf", &box.z);
//     getchar();
//     volume(&box);
// }

double volume(struct Box box){
    static double vol;
    vol = box.x * box.y * box.z;
    return vol;
}

void main(){
    struct Box box;
    printf("������������ĳ�:");
    scanf("%lf", &box.x);
    getchar();
    printf("������������Ŀ�:");
    scanf("%lf", &box.y);
    getchar();
    printf("������������ĸ�:");
    scanf("%lf", &box.z);
    getchar();
    double vol = volume(box);
    printf("��������������Ϊ:%.2f", vol);
}