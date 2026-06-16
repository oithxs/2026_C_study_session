#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(!(a <= 0 || b <= 0)){
        printf("Both numbers are positive\n");
    } else if(a > 0 || b > 0){
        printf("At least one of the numbers is positive\n");
    } else {
        printf("Neither number is positive\n");
    }
    
    return 0;
}