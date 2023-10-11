#include <stdio.h>

void square(int x) {
    // TODO Implement this function.

    // HINT This function can't work. Why? What needs to be changed?
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