// C style pseudocode example.
// Prints out "Hurrah!" if the entered number is 5
//
// William Setiawan (z5388080)

#include <stdio.h>

void run_program(void);

/**
 * This program performs the following:
 *
 * 1. Prompt the user for an integer
 * 2. Scan in one integer (n)
 * 3. If the integer is 5, print "Hurrah!"
 */
int main(void) {
    run_program();

    return 0;
}

void run_program(void) {
    int n = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n == 5) {
        printf("Hurrah!");
    }
}