// A file containing expressions demonstrating properties of data types
// Written by William Setiawan
//  on 23/02/2023

#include <stdio.h>

int main(void) {
    // Some data types
    char character_type;
    int integer_type;
    double double_type;

    // What is returned by the following?
    int division_example = 10 / 5;
    char character_example_one = 'a' + 1;
    int character_example_two = 'a' + 1;

    // What do these return?
    int expression_one = 7 / 2;
    printf("%d\n", expression_one);

    double expression_two = (3.0 / 2) + 1;
    printf("%lf\n", expression_two);

    int expression_three = 'a' + 5;
    printf("%d\n", expression_three);

    int expression_four = 'F' - 'A' + 'a';
    printf("%d\n", expression_four);

    return 0;
}