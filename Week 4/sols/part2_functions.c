// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int add(int number1, int number2);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = add(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int number1, int number2) {
    // Function body
    int sum = number1 + number2;
    // return statement
    return sum;
}

