#include <stdio.h>

int main(void) {
    printf("What is the target sum? ");
    int target_sum;
    scanf("%d", &target_sum);

    int running_sum = 0;

    int input;
    while (running_sum < target_sum && scanf("%d", &input) == 1) {
        running_sum += input;
    }

    printf("Last number read: %d\nRunning sum stopped at: %d\n",
        input,
        running_sum);

    return 0;
}