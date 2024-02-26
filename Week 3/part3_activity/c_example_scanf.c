#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    printf("What is the end range of prime numbers? ");
    int max_prime;
    scanf("%d", &max_prime);

    int current_num = 1;
    while (current_num < max_prime) {
        int start_num = 2;
        int stop_flag = FALSE;

        while (start_num < current_num &&
            stop_flag == FALSE
        ) {
            if (current_num % start_num == 0) {
                stop_flag = TRUE;
            } else {
                start_num++;
            }
        }

        if (stop_flag == FALSE) {
            printf("%d ", current_num);
        }

        current_num++;
    }
    printf("\n");

    return 0;
}