#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    // Enter a series of integers
    int input;
    int sum = 0;
    int keep_going = TRUE;

    while (keep_going == TRUE && scanf("%d", &input) == 1) {
        if (input < 0) {
            printf("The sum is %d\n", sum);
            keep_going = FALSE;
        } else {
            sum += input;
        }
    }

    return 0;
}