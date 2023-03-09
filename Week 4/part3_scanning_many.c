// Demonstrating scanning a variable number of variables in a loop
// Written by William Setiawan (z5388080)
//  on 9/3/2023

#include <stdio.h>

void bad_scan(void) {
    // How can the code below produce an error?
    int num;
    scanf("%d", &num);
    printf("%d\n", num);

    // What is the value of result?
    int num1;
    int result = scanf("%d", &num1);
    printf("Result is: %d\n", result);

    // What about with two integers?
    int num2;
    result = scanf("%d %d", &num1, &num2);
    printf("Result is: %d\n", result);
}

void scan_temperature_long(void) {

    // TODO: convert temperature code here
}

void scan_temperature_short(void) {

    // TODO: try to make above code shorter
    // NOTE: can only print temperature with shorter version
}

int main(void) {
    bad_scan();

    // Because CTRL+D is EOF, we can only have one of these at a time
    scan_temperature_long();
    // scan_temperature_short();

    return 0;
}