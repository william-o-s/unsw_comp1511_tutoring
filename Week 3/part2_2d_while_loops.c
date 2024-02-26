// part2_2d_while_loops.c
//
// Written by William Setiawan (z5388080),
// on 26 Feb 2024
//
// This program is a simple deonstration of a 2D while loop

#include <stdio.h>

// TODO: Do we define any constants?
#define MAX 5

int main(void) {
    // TODO: Convert flowchart of 2D while loop to code
    printf("Start of outer loop!\n");

    int row = 0;
    while (row < MAX) {

        printf("Start of inner loop!\n");

        int col = 0;
        while (col < MAX) {
            printf("%d ", col);

            col++;
        }

        printf("\nEnd of inner loop!\n");

        row++;
    }

    printf("End of outer loop!\n");

    return 0;
}
