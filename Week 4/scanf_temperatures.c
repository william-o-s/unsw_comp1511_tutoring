// William Setiawan (z5388080)
// on 20/06/2023

#include <stdio.h>

#define NUM_DAYS 7

int main(void) {
    // Declare and initialise array
    int temps[NUM_DAYS] = {0};

    // Read in values
    int i = 0;
    while (i < NUM_DAYS) {
        scanf("%d", &temps[i]);
        i++;
    }

    // Find max values
    int max_temp = temps[0];
    int j = 0;
    while (j < NUM_DAYS) {
        if (temps[j] > max_temp) {
            max_temp = temps[j];
        }
        j++;
    }

    // Print max temp
    printf("Max temp is: %d\n", max_temp);

    return 0;
}