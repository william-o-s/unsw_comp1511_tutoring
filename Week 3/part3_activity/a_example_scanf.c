#include <stdio.h>

int main(void) {
    int sum = 0;

    int input;
    while (scanf("%d", &input) == 1) {
        if (input < 0) {
            printf("The sum is %d.\n", sum);
            return 0;
        } else {
            sum += input;
        }
    }

    return 0;
}