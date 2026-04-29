#include<stdio.h>
int main(void){
    int a = 10;
    int b = 20;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    printf("a - b = %d\n", sub);
    printf("a * b = %d\n", mul);
    printf("a / b = %d\n", div);
    printf("a %% b = %d\n", mod);
    return 0;
}