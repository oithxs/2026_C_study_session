#include<stdio.h>

void hello(void){
    printf("Hello World!\n");
}

void line(void){
    printf("-----------\n");
}

int main(void){
    line();
    printf("start\n");

    hello();
    hello();
    
    printf("end\n");
    line();
    return 0;
}