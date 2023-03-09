// Demonstrating usage of arrays
// Written by William Setiawan (z5388080)
//  on 9/3/2023

#include <stdio.h>

#define SMALL_SIZE 3
#define STRING_SIZE 8
#define DEFAULT_SIZE 10

void print_array(void) {
    printf("\n--- NOW DOING: print_array() ---\n");
    int array[SMALL_SIZE] = { 1, 2, 3 };

    int index = 0;
    while (index < SMALL_SIZE) {
        printf("%d ", array[index]);

        index++;
    }
    printf("\n");
}

void odd_only(void) {
    printf("\n--- NOW DOING: odd_only() ---\n");
    int array[DEFAULT_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int check_even_index = 0;
    while (check_even_index < DEFAULT_SIZE) {
        if (array[check_even_index] % 2 == 0) {
            array[check_even_index] += 1;
        };

        check_even_index++;
    }

    int print_index = 0;
    while (print_index < DEFAULT_SIZE) {
        printf("%d ", array[print_index]);

        print_index++;
    }
    printf("\n");
}

void copy_array(void) {
    printf("\n--- NOW DOING: copy_array() ---\n");
    double first_array[SMALL_SIZE] = {  1.0, 2.0, 3.0 };
    double second_array[DEFAULT_SIZE] = { 0.0 };

    int index = 0;
    while (index < SMALL_SIZE) {
        second_array[index] = first_array[index];

        index++;
    }

    index = 0;
    while (index < DEFAULT_SIZE) {
        printf("%.1lf ", second_array[index]);

        index++;
    }
    printf("\n");
}

void largest_character(void) {
    printf("\n--- NOW DOING: largest_character() ---\n");
    char array[STRING_SIZE] = { 'm', 'g', 'l', 'i', 'h', 'z', 'c', 't' };
    char largest_character = array[0];

    int index = 0;
    while (index < STRING_SIZE) {
        printf("ASCII value of '%c': %d\n", array[index], array[index]);

        if (array[index] > largest_character) {
            largest_character = array[index];
        }

        index++;
    }

    printf("Largest character found: '%c'\n", largest_character);
}

int main(void) {
    print_array();
    odd_only();
    copy_array();
    largest_character();

    return 0;
}