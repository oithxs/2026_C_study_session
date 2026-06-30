#include<stdio.h>

void line(void){
    printf("-----------\n");
}

int get(void){
    int input;
    printf("please enter a positive integer: ");
    scanf("%d", &input);
    return input;
}

int main(void){
    int num;
    line();
    printf("start\n");

    num = get();
    printf("num = %d\n", num);
    
    printf("end\n");
    line();
    return 0;
}