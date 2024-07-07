// Check for Command Line Arguments
// This program checks if any command-line arguments were provided except for 
// the program name. If none were provided, print a message indicating so; 
// otherwise, print the number of arguments.
// Written by Sofia De Bellis, s5418801, on March 2024

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("No command-line arguments provided.\n");
    } else {
        printf("Number of arguments: %d\n", argc - 1);
    }

    return 0;
}
