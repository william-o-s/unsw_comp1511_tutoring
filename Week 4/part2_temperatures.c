// Demonstrating scanning a fixed number of variables in a loop
// Written by William Setiawan (z5388080)
//  on 9/3/2023

#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // TODO: Declare and initialise array
    int array[NUM_DAYS];

    // TODO: Read in values
    for (int i = 0; i < NUM_DAYS; i++) {
        scanf("%d", &array[i]);
    }

    // TODO: Find max values
    int max_value = array[0];
    for (int i = 0; i < NUM_DAYS; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // TODO: Print max temp
    printf("Max temp is: %d\n", max_value);

    return 0;
}