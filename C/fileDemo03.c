#include <stdio.h>

int main(){
    char str[100];
    int i;
    printf("Enter a value:");
    scanf("%s %d", str, &i);

    printf("\nU entered: %s %d", str, i);
    printf("\n");
    return 0;
}