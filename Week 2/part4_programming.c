// A file containing a program that takes input
// Written by William Setiawan
//  on 23/02/2023

#include <stdio.h>

void print_error_smaller(void) {
    printf("Error: First integer was smaller than second!\n");
}

void print_error_zero(void) {
    printf("Error: Second integer is 0!\n");
}

int main(void) {
    // Scan in two integers (a and b)
    printf("Enter two integers: ");

    int a;
    int b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        // If the first integer is less than the second
        print_error_smaller();

    } else if (b == 0) {
        // If the second integer is 0
        print_error_zero();

    } else {
        // If the first integer is larger than the second
        int division_with_int = a / b;
        printf("a / b = %d\n", division_with_int);

        double division_with_double = (a * 1.0) / (b * 1.0);
        printf("(a * 1.0) / (b * 1.0) = %lf\n", division_with_double);
    }

    return 0;
}