// part1_arrays, even_only
//
// Written by Sofia De Bellis, z5418801
// on March 2024
//
// This program adds 1 to any odd values in an array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 1) {
            array[i] += 1;
        }
        i++;
    }

    int j = 0;
    while (j < SIZE) {
        printf("%d ", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}