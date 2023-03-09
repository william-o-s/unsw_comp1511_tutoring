// Demonstrating usage of arrays
// Written by William Setiawan (z5388080)
//  on 9/3/2023

#include <stdio.h>

#define SMALL_SIZE 3
#define STRING_SIZE 8
#define DEFAULT_SIZE 10

void print_array(void) {
    printf("\n--- NOW DOING: print_array() ---\n");

    // TODO: Make an array
    int array[DEFAULT_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // TODO: Loop over array
    int index = 0;
    while (index < DEFAULT_SIZE) {
        // TODO: Print element in array
        printf("%d ", array[index]);

        index++;
    }
    printf("\n");
}

void odd_only(void) {
    printf("\n--- NOW DOING: odd_only() ---\n");

    int array[DEFAULT_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int index = 0;
    while (index < DEFAULT_SIZE) {
        if (array[index] % 2 == 0) {
            array[index] += 1;
        }

        index++;
    }

    int diff_index = 0;
    while (diff_index < DEFAULT_SIZE) {
        printf("%d ", array[diff_index]);

        diff_index++;
    }
    printf("\n");
}

void copy_array(void) {
    printf("\n--- NOW DOING: copy_array() ---\n");

    double array[SMALL_SIZE] = { 1.2, 3.3, 4.5 };
}

void largest_character(void) {
    printf("\n--- NOW DOING: largest_character() ---\n");

    char array[STRING_SIZE] = { '1', '2', '3', '4', '5', '6', '7', '8' };

    char largest_character = array[0];

    int index = 0;
    while (index < STRING_SIZE) {
        if (array[index] > largest_character) {
            largest_character = array[index];
        }

        index++;
    }

    printf("Largest character: %c\n", largest_character);
}

int main(void) {
    print_array();
    odd_only();
    copy_array();
    largest_character();

    return 0;
}