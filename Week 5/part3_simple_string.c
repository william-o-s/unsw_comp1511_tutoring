// part3_simple_string.c
//
// This program was written by William (z5388080)
// on 11 March 2024
//
// This program demonstrates how to work with strings in C.

#include <stdio.h>

#define MAX_SIZE 1024

void print_string(char my_string[]);
void print_string2(char my_string[]);

int main(void) {
    // Declare and initialise a string
    char my_string[] = "Hello world!";

    // Printing my_string with loops
    print_string(my_string);
    print_string2(my_string);

    // How to print a string in its entirety
    printf("My string: %s\n", my_string);

    // Declare a string
    char another_string[MAX_SIZE];

    // Read a string from the user, note we DO NOT use scanf for strings
    printf("Enter a string: ");
    fgets(another_string, MAX_SIZE, stdin);

    // Print the string using fputs
    fputs(another_string, stdout);

    return 0;
}

// Traverse the string and print each character
void print_string(char my_string[]) {
    int i = 0;
    while (my_string[i] != '\0') {
        printf("%c", my_string[i]);
        i++;
    }
    printf("\n");
}

// Another way to traverse the string and print each character
void print_string2(char my_string[]) {
    for (int i = 0; my_string[i] != '\0'; i++) {
        printf("%c", my_string[i]);
    }
    printf("\n");
}