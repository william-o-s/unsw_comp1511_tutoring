// Reverse Command Line Arguments
// This program prints all the command-line arguments passed to it in reverse order.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", argv[i]);
    }

    // Bonus: printing the characters in reverse too
    for (int i = argc - 1; i > 0; i--) {
        for (int j = strlen(argv[i]); j >= 0; j--) {
            printf("%c", argv[i][j]);
        }
        printf("\n");
    }

    return 0;
}