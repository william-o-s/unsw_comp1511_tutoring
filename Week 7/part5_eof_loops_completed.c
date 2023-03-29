// Part 5: EOF Loops
// Edited by William Setiawan (z5388080)
//  on 30/03/2023

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // GIVEN
    /* 
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }
    */

    // Solution
    char my_arr[MAX_LETTERS];
    while (fgets(my_arr, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_arr);
    }

    return 0;
}