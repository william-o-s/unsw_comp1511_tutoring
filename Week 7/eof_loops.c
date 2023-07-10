// William Setiawan (z5388080)
// on 11/7/2023

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }

    // TODO: Repeat the above for line-by-line instead of
    // char-by-char

    return 0;
}