// part1_galaxy.c
//
// This program was written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

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
    int row, col;

    // Initialise the galaxy
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }

    // Place the planets and nebulae in the galaxy
    printf("Enter planets and nebulae:\n");
    int points;
    char type;
    scanf(" %c", &type);
    while (type != 'q') {
        scanf(" %d %d", &row, &col);
        if (type == 'p') {
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (type == 'n') {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        scanf(" %c", &type);
    }

    // Place the player in the galaxy
    printf("Enter the starting position of the player: ");
    scanf("%d %d", &row, &col);
    while (row < 0 || row >= SIZE || col < 0 || col >= SIZE ||
           galaxy[row][col].entity != EMPTY) {
        printf("Invalid player position!\n");
        printf("Please re-enter the starting position of the player: ");
        scanf("%d %d", &row, &col);
    }
    galaxy[row][col].entity = SPACESHIP;
    galaxy[row][col].points = 0;

    // Place the stars in the galaxy
    printf("Enter the position and points of the star(s):\n");
    while(scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    print_map(galaxy);
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