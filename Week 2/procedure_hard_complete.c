// Program demonstrating basic input/output, conditionals, and procedures.
// William Setiawan (z5388080)
// on 6/6/2023

#include <stdio.h>

void run_program(void);
void error_less_than(void);
void error_zero(void);

/**
 * This program performs the following:
 *
 * 1. Scan in two integers (a and b)
 * 2. If the first integer is less than the second, print out a short error
 * message using a procedure.
 * 3. If the second integer is 0, print out a different short error message.
 * 4. If the first integer is larger than the second, prints a / b and
 * (a * 1.0) / (b * 1.0).
 */
int main(void) {
    run_program();

    return 0;
}

void run_program(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        error_less_than();
    } else if (b == 0) {
        error_zero();
    } else {
        int a_div_b_int = a / b;
        double a_div_b_dbl = (a * 1.0) / (b * 1.0);
        printf("a / b == %d\n", a_div_b_int);
        printf("(a * 1.0) / (b * 1.0) == %lf\n", a_div_b_dbl);
    }
}

void error_less_than(void) {
    printf("The first integer cannot be smaller than the second!");
}

void error_zero(void) {
    printf("The second integer cannot be zero!");
}