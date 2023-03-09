// Demonstrating practice of using functions
// Written by William Setiawan (z5388080)
//  on 9/3/2023

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

struct colour {
    int red;
    int green;
    int blue;
};

struct colour make_colour(int red, int green, int blue) {
    // TODO: initialise a struct colour
    struct colour new_colour;
    new_colour.red = red + 1;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

int main(void) {
    return 0;
}