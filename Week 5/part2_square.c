// Square function
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>

void square(int x) {
    x = x * x;
    // printf("value inside square function: %d\n", x);
}

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    square(input);

    printf("value after square: %d\n", input);

    return 0;
}
