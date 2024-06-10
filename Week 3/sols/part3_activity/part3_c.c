// C: Scan for numbers until end of input and display all even numbers entered.
// Written by Sofia De Bellis (z5418801)
// on May 2024

#include <stdio.h>

int main(void) {
    int num = 0;

    printf("Please enter a number: ");
    while (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        printf("Please enter a number: ");
    }

    return 0;
}