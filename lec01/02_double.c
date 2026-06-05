#include<stdio.h>

int main(void){
    double a, b, sum, sub, mul, div;
    
    scanf("%lf %lf",&a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("a + b = %f\n", sum);
    printf("a - b = %f\n", sub);
    printf("a * b = %f\n", mul);
    printf("a / b = %f\n", div);

    return 0;
}