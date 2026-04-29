#include<stdio.h>
int main(void){
    int a = 10,b;
    printf("Enter an integer: ");
    scanf("%d", &b);
    if(a > b){
        printf("a is greater than b\n");
    } else if(a == b){
        printf("a is equal to b\n");
    } else {
        printf("a is not greater than b\n");
    }
    return 0;
}