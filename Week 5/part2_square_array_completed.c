// Square array function
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>

#define MAX_SIZE 100

int square(int x);
void print_array(int length, int array[MAX_SIZE]);
void square_array(int length, int array[MAX_SIZE]);

int main(void) {

    int inputs[MAX_SIZE];

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);
    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        inputs[i] = input;
    }

    printf("Values before square_array: ");
    print_array(size, inputs);

    //call square, copying the value of input into `int x`
    square_array(size, inputs);

    printf("Values after square_array:  ");
    print_array(size, inputs);

    return 0;
}

// Returns the square of a given integer.
int square(int x) {
    return x * x;
}

//prints out an array all pretty like
void print_array(int length, int array[MAX_SIZE]) {
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%3d", array[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Squares all elements of an array, modifying the array in the process.
void square_array(int length, int array[MAX_SIZE]) {
    for (int i = 0; i < length; i++) {
        array[i] = square(array[i]);
    }
}
