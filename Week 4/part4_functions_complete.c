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
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

int get_main_colour(struct colour colour) {
    // Return the colour that is larger than the other two colours, otherwise 0
    if (colour.red > colour.green && colour.red > colour.blue) {
        return colour.red;

    } else if (colour.green > colour.red && colour.green > colour.blue) {
        return colour.green;

    } else if (colour.blue > colour.red && colour.blue > colour.green) {
        return colour.blue;

    } else {
        return 0;
    }
}

double brightness(struct colour colour) {
    return sqrt(colour.red) + sqrt(colour.green) + sqrt(colour.blue);
}

double average_brightness(struct colour colours[MAX_SIZE], int size) {
    double avg = 0;

    int i = 0;
    while (i < size) {
        avg += brightness(colours[i]);
        i++;
    }

    return avg / size;
}

int main(void) {
    struct colour colours[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++) {
        colours[i] = make_colour(i, i + 1, i + 2);
    }

    printf("Average brightness: %lf\n", average_brightness(colours, MAX_SIZE));

    return 0;
}