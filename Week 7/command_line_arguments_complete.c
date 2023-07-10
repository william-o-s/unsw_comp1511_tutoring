// William Setiawan (z5388080)
// on 11/7/2023

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total arguments: %d\n", argc);

    printf("Argument values:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}