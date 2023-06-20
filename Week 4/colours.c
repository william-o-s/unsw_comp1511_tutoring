// William Setiawan (z5388080)
// on 20/06/2023

#include <stdio.h>

#define MAX_SIZE 100

struct colour {
    int red;
    int green;
    int blue;
};

int main(void) {

    return 0;
}

struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

int get_main_colour(struct colour c) {
    if (c.red > c.green && c.red > c.blue) {
        return c.red;
    } else if (c.green > c.red && c.green > c.blue) {
        return c.green;
    } else if (c.blue > c.red && c.blue > c.green) {
        return c.blue;
    } else {
        return 0;
    }
}

double brightness(struct colour c) {
    return sqrt(c.red) + sqrt(c.green) + sqrt(c.blue);
}

double average_brightness(struct colour c[MAX_SIZE], int size) {
    double avg = 0;

    int i = 0;
    while (i < size) {
        avg += brightness(c[i]);
        i++;
    }

    return avg / size;
}
