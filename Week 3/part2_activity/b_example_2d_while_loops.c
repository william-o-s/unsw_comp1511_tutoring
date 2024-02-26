#include <stdio.h>

#define SIZE 4

int main(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col % 2 == 0) {
                printf("O");
            } else {
                printf("X");

            }

            col++;
        }

        printf("\n");
        row++;
    }
	return 0;
}