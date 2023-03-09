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

    // Running measure of maximum temperature
    int input_temp;
    int result = scanf("%d", &input_temp);

    // Assume we always have valid input
    int max_temp = input_temp;

    // Read in temperatures
    while (result == 1) {
        // Successfully read 1 integer temperature
        if (input_temp > max_temp) {
            max_temp = input_temp;
        }
        
        result = scanf("%d", &input_temp);
    }

    // Print max temp
    printf("Max temp is: %d\n", max_temp);
}

void scan_temperature_short(void) {

    // Running measure of maximum temperature
    int input_temp;

    // Read in temperatures
    while (scanf("%d", &input_temp) == 1) {
        printf("Temperature read in: %d\n", input_temp);
    }
}

int main(void) {
    bad_scan();

    // Because CTRL+D is EOF, we can only have one of these at a time
    // scan_temperature_long();
    scan_temperature_short();

    return 0;
}