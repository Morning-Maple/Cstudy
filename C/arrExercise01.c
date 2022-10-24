#include <stdio.h>

void main(){
    char word[26];
    for (int i = 0; i < 26; i++){
        word[i]='A'+i;
    }

    for (int i = 0; i < 26; i++){
        printf("word[%d]=%c;", i, word[i]);
    }
    
}