// William Setiawan (z5388080)
// on 20/06/2023

#include <stdio.h>

#define MAX_SIZE 10
#define SMALL_SIZE 3
#define MEDIUM_SIZE 8

int main(void) {
    int input1[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    odd_only(input1);

    double input2[SMALL_SIZE] = { 3.14, 2.71, 1.15 };
    copy_array(input2);

    char input3[MEDIUM_SIZE] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    largest_character(input3);

    return 0;
}

void odd_only(int input[MAX_SIZE]) {
    // TODO: Loop over every element in input, and increment every even value

    // TODO: Print every element in input
}

void copy_array(double input[SMALL_SIZE]) {
    // TODO: Create a copy array of size MAX_SIZE initialised with zeros

    // TODO: Copy every element in input to the copy array

    // TODO: Print every element in the copy array
}

void largest_character(char input[MEDIUM_SIZE]) {
    // TODO: Create a variable to store the largest character, initialised
    // as the first element

    // TODO: Loop over every element in input and update the largest character

    // TODO: Print the largest character
}
