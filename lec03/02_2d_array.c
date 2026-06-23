#include<stdio.h>

int main(void) {
    int array[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    printf("array[2][3] = %d\n", array[2][3]);
    printf("array[4][0] = %d\n", array[4][0]);
    printf("array[0][4] = %d\n", array[0][4]);
    printf("array[3][1] = %d\n", array[3][1]);

    return 0;
}