#include <stdio.h>

struct Box{
    double x;
    double y;
    double z;
};

// void volume(struct Box *box){
//     double vol;
//     vol = (*box).x * (*box).y * (*box).z;
//     printf("输入的立方体体积为:%.2f", vol);
// }

// void main(){
//     struct Box box;
//     printf("请输入立方体的长:");
//     scanf("%lf", &box.x);
//     getchar();
//     printf("请输入立方体的宽:");
//     scanf("%lf", &box.y);
//     getchar();
//     printf("请输入立方体的高:");
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
    printf("请输入立方体的长:");
    scanf("%lf", &box.x);
    getchar();
    printf("请输入立方体的宽:");
    scanf("%lf", &box.y);
    getchar();
    printf("请输入立方体的高:");
    scanf("%lf", &box.z);
    getchar();
    double vol = volume(box);
    printf("输入的立方体体积为:%.2f", vol);
}