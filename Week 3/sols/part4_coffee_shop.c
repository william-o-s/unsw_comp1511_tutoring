// coffee_shop.c
//
// This program was written by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

enum coffee_type {
	LATTE,
	CAPPUCCINO,
	ESPRESSO,
	AMERICANO,
	MATCHA
};

struct coffee {
	enum coffee_type type;
	double num_sugars;
	char size;
};

int main(void) {
    struct coffee order;
    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, "
           "3: AMERICANO, 4: MATCHA): ");
    
    int type;
    scanf("%d", &type);

    if (type == 0) {
        order.type = LATTE;
    } else if (type == 1) {
		order.type = CAPPUCCINO;
	} else if (type == 2) {
		order.type = ESPRESSO;
	} else if (type == 3) {
		order.type = AMERICANO;
	} else {
        order.type = MATCHA;
    }

    printf("Enter number of sugars: ");
    scanf("%lf", &order.num_sugars);		

    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &order.size);

	double total_cost = BASE_COST;

	if (order.size == LARGE) {
		total_cost += ADDED_COST;
	}

	if (order.type == LATTE || 
			order.type == CAPPUCCINO|| 
			order.type == MATCHA) {
			total_cost += ADDED_COST;
	}
	
	total_cost += ADDED_COST * order.num_sugars;

	printf("Total cost: %.2lf\n", total_cost);

	return 0;
}
