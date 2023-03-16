// Strings Practice
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>
#include <string.h>

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");

    // EXTRA: when printing a string, do you need to know
    //  its length?
}

int main (void) {
    char my_string[] =  "Many chars";

    // EXTRA: why is the input type a (char *)?
    print_string(my_string);

    // Also can use fputs
    fputs(my_string, stdout);

    return 0;
}