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

void initialize_map(struct celestial_body galaxy[SIZE][SIZE]);
void initialize_player(struct celestial_body galaxy[SIZE][SIZE]);
void initialize_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]);
void initialize_stars(struct celestial_body galaxy[SIZE][SIZE]);
void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy: entities are EMPTY and points are 0
    initialize_map(galaxy);

    // TODO: Place the player in the galaxy
    initialize_player(galaxy);

    // TODO: Place the planets and nebulae in the galaxy
    initialize_planets_nebulae(galaxy);

    // TODO: Place the stars in the galaxy
    initialize_stars(galaxy);

    // TODO: Print the map
    print_map(galaxy);
    // Common mistakes
    // 1. print_map(struct celestial_body galaxy[SIZE][SIZE])
    // 2. print_map(galaxy[SIZE][SIZE])
}

void initialize_map(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

// NOTE: assume input coordinates are valid, but check for boundary edge
void initialize_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");

    int row;
    int col;
    scanf(" %d %d", &row, &col);
    while (!(row == 0 || row == SIZE - 1 || col == 0 || col == SIZE - 1)) {
        // Coordinates are not on the edge
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: ");
        scanf(" %d %d", &row, &col);
    }

    galaxy[row][col].entity = SPACESHIP;
}

void initialize_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("How many planets and nebulae are there? ");
    int count;
    scanf(" %d", &count);

    printf("Enter the position and points of the planet(s) and nebula(e): ");
    for (int i = 0; i < count; i++) {
        char type;
        int row;
        int col;
        scanf(" %c %d %d", &type, &row, &col);

        if (type == 'p') {
            int points;
            scanf(" %d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
    }
}

void initialize_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the position and points of the star(s): \n");

    int row;
    int col;
    int points;
    while (scanf(" %d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }
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