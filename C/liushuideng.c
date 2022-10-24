#include <stdio.h>

const int led0, led1, led2, led3, led4, led5, led6, led7;

void main(){
    char led[] = {led0, led1, led2, led3, led4, led5, led6, led7,};
    for(int i = 0; i <= 7; i++){
        led[i] = 0;
    }
    //while(1){}
    for(int i = 0; i <= 7; i++){
        led[i] = 1;
        if((i-1) >= 0){
            led[i-1] = 1;
        }
        if((i-2) >= 0){
            led[i-2] = 1;
        }
        if((i-4) >= 0){
            led[i-4] = 0;
        }
    }
    
}