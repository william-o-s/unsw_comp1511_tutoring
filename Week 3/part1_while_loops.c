// part1_while_loops.c
//
// Written by William Setiawan (z5388080),
// on 26 Feb 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    printf("Start of loop!\n");

    int x = 0;
    while (x < 10) {
        // executes if TRUE ^
        printf("x is %d\n", x);
        x++;
    }

    printf("End of loop!\n");

    return 0;
}
