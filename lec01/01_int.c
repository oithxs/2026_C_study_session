#include<stdio.h>

int main(void){
    
    int a, b, sum, sub, mul, div, mod;
    
    scanf("%d %d",&a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("sum=%d\n",sum);
    printf("sub=%d\n",sub);
    printf("mul=%d\n",mul);
    printf("div=%d\n",div);
    printf("mod=%d\n",mod);

    return 0;
}