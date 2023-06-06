// Program demonstrating the return values of certain expressions.
// William Setiawan (z5388080)
// on 6/6/2023

#include <stdio.h>

int main(void) {
    printf("(7 / 2) == %d\n", (7 / 2));

    printf("(3.0 / 2) + 1 == %lf\n", (3.0 / 2) + 1);

    printf("'a' + 5 == %c\n", 'a' + 5);
    printf("'a' + 5 == %d\n", 'a' + 5);

    printf("'F' - 'A' + 'a' == %c\n", 'F' - 'A' + 'a');
    printf("'F' - 'A' + 'a' == %d\n", 'F' - 'A' + 'a');

    return 0;
}