// coffee_shop.c
//
// Written by William Setiawan (z5388080)
// on 11 June 2024
//
// This program is a simple coffee shop used to demonstrate the use of
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.

// TODO: Define a struct `coffee` that stores
// 1. the coffee type (an enum)
// 2. the number of sugars
// 3. the size of a coffee

int main(void) {
    // TODO: Initalise a variable for the struct

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \
            3: AMERICANO, 4: MATCHA): ");

    // TODO: take user input

    printf("Enter number of sugars: ");
    // TODO: take user input

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input

    // TODO: Calculate cost of order

	printf("Total cost: %.2lf\n", total_cost);
	return 0;
}
