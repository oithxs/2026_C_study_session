#include<stdio.h>

int main(void){
    int a;

    do{
        printf("Enter a positive integer: ");
        scanf("%d", &a);
        printf("You entered: %d\n", a);
    } while(a <= 0);

    return 0;
}