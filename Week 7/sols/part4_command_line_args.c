// This program counts the number of command line arguments and pints them
// Written by Sofia De Bellis, z5418801, on March 2024

#include <stdio.h>

int main(int argc, char *argv[]) {
    
    printf("Total arguments: %d\n", argc);

    printf("Argument values:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
