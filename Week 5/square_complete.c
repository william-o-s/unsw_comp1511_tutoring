#include <stdio.h>

/**
 * Steps:
 * 1. Change the return type of the square() function
 * 2. Return the squared value
 * 3. Assign the return value of the square() function to input
 */

int square(int x) {
    return x * x;
}

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    input = square(input);

    printf("value after square: %d\n", input);

    return 0;
}