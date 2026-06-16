#include <stdio.h>

int main(void){
    int a;
    while(1){
        printf("please enter a positive integer: ");
        scanf("%d", &a);
        printf("You entered: %d\n", a);
        if(!(a > 0)){
            break;
        }
    }

    return 0;
}