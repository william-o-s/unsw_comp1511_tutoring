// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    int row = 0;
    int col = 0;
    
    printf("Start of outer loop!\n\n");
    while (row < MAX_ROW) {
        col = 0;
        printf("Start of inner loop!\n");

        while (col < MAX_COL) {
            printf("%d ", col);
            col++;
        }

        printf("\nEnd of inner loop!\n\n");
        row++;
    }
    printf("End of outer loop!\n");

    return 0;
}
