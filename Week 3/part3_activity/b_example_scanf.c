#include <stdio.h>

int main(void) {
    int count = 0;

    int input;
    while (scanf("%d", &input) == 1) {
        count++;
    }

    /*
    char quit;
    if (scanf("%c", &quit) == 1 && quit == 'q') {
        printf("You entered %d numbers!\n", count);
    } else {
        printf("Sorry, not sure what to do!\n");
    }
    */

    return 0;
}