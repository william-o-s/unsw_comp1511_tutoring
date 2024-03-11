// part1_galaxy.c
//
// This program was written by William (z5388080)
// on 11 March 2024
//
// This program is a simple game that allows the user to build a galaxy.
// The user can place stars, planets, and nebulae in the galaxy.
//
// Refer to the tutorial page for information on functionality.
// Take note of this exercise for Assignment 1, stage 1.2

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy: entities are EMPTY and points are 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }

    // TODO: Place the player in the galaxy
    // NOTE: assume input coordinates are valid, but check for boundary edge
    printf("Enter the starting position of the player: ");

    int row;
    int col;
    scanf(" %d %d", &row, &col);
    // Coordinates are not on the edge
    while (!(row == 0 || row == SIZE - 1 || col == 0 || col == SIZE - 1)) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf(" %d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;

    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");

    int count;
    scanf(" %d", &count);

    // TODO: Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");

    int points;
    for (int i = 0; i < count; i++) {
        char type;
        scanf(" %c %d %d", &type, &row, &col);

        if (type == 'p') {
            scanf(" %d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
    }

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");

    while (scanf(" %d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    // TODO: Print the map
    print_map(galaxy);

    // Common mistakes
    // 1. print_map(struct celestial_body galaxy[SIZE][SIZE])
    // 2. print_map(galaxy[SIZE][SIZE])
}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}