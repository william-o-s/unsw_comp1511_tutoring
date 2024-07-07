#include <stdio.h>

void halve_values(int num_1, int num_2, int num_3);

int main(void) {
    int num_1 = 4;
    int num_2 = 10;
    int num_3 = 16;

    printf("Values before halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    halve_values(num_1, num_2, num_3);

    printf("Values after halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    return 0;
}

void halve_values(int num_1, int num_2, int num_3) {
    num_1 = num_1 / 2;
    num_2 = num_2 / 2;
    num_3 = num_3 / 2;
}

