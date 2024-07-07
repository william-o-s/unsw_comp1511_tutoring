// Count Characters in Command Line Arguments
// This program counts the total number of characters in all 
// the command-line arguments passed to it.
// Written by Sofia De Bellis, z5418801, on March 2024

#include <stdio.h>

int main(int argc, char *argv[]) {
    int count = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            count++;
        }
    }

    printf("Total Characters: %d\n", count);

    return 0;
}
