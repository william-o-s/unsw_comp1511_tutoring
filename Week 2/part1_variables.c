// part1_variables
//
// This program was written by William Setiawan, z5388080
// on 19 Feb 2024
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int age;

    // 2. Initialise the variables
    age = 18;

    // 1/2 Declare and initialise on one line
    int zid = 5388080;

    // 3. Print the variables
    printf("My age is %d\n", age);

    // 4. Reassign the values of some of the variables
    age = 19;

	// 5. Print the variables
    printf("My age is now %d\n", age);

	return 0;
}
