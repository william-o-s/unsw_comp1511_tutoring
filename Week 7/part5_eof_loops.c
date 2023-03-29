// Part 5: EOF Loops
// Edited by William Setiawan (z5388080)
//  on 30/03/2023

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // TODO: How to scanf strings?
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }

    return 0;
}