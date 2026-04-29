#include<stdio.h>
int main(void){
    double a = 3.14;
    double b = 2.71;
    double sum = a + b;
    double sub = a - b;
    double mul = a * b;
    double div = a / b;
    printf("a + b = %lf\n", sum);
    printf("a - b = %lf\n", sub);
    printf("a * b = %lf\n", mul);
    printf("a / b = %lf\n", div);
    return 0;
}