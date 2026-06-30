#include<stdio.h>

void line(void){
    printf("-----------\n");
}

int get(void){
    int input;
    printf("Please enter a positive integer: ");
    scanf("%d", &input);
    return input;
}

void print(int number){
    printf("number = %d\n", number);
}

int main(void){
    int num;
    line();
    printf("start\n");

    num = get();
    print(num);
    
    printf("end\n");
    line();
    return 0;
}