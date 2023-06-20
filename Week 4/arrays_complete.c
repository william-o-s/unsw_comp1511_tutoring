// William Setiawan (z5388080)
// on 20/06/2023

#include <stdio.h>

#define MAX_SIZE 10
#define SMALL_SIZE 3
#define MEDIUM_SIZE 8

void odd_only(int input[MAX_SIZE]);
void copy_array(double input[SMALL_SIZE]);
void largest_character(char input[MEDIUM_SIZE]);

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
    int i = 0;
    while (i < MAX_SIZE) {
        if (input[i] % 2 == 0) {
            input[i]++;
        }
        i++;
    }

    int j = 0;
    while (j < MAX_SIZE) {
        printf("%d ", input[j]);
        j++;
    }
    printf("\n");
}

void copy_array(double input[SMALL_SIZE]) {
    double copied[MAX_SIZE] = { 0.0 };

    int i = 0;
    while (i < SMALL_SIZE) {
        copied[i] = input[i];
        i++;
    }

    int j = 0;
    while (j < MAX_SIZE) {
        printf("%lf ", input[j]);
        j++;
    }
    printf("\n");
}

void largest_character(char input[MEDIUM_SIZE]) {
    char largest_character = input[0];

    int i = 0;
    while (i < MEDIUM_SIZE) {
        if (input[i] > largest_character) {
            largest_character = input[i];
        }
        i++;
    }

    printf("%c\n", largest_character);
}
