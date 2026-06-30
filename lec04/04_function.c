#include<stdio.h>

void line(void){
    printf("-----------\n");
}

int getInteger(void){
    int input;
    printf("Please enter a positive integer: ");
    scanf("%d", &input);
    return input;
}
char getOp(void){
    char op;
    printf("Please enter a operator: ");
    scanf(" %c", &op);
    return op;
}

int alu (int a, int b, char op){
    if(op == '+'){
        return a + b;
    }else if(op == '-'){
        return a - b;
    }else if(op == '*'){
        return a * b;
    }else if(op == '/') {
        return a / b;
    }
    printf("ERROR: invalid operator\n");
    return -1;
}

int main(void){
    int num1, num2,sum;
    char op;
    line();
    printf("start\n");

    num1 = getInteger();
    num2 = getInteger();
    op = getOp();
    sum = alu(num1, num2,op);
    printf("%d %c %d = %d\n", num1, op, num2, sum);
    
    printf("end\n");
    line();
    return 0;
}