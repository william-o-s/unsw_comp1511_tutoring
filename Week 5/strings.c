#include <stdio.h>

void print_string(char *string);

// Functions to implement:

// TODO Implement this function.
int count_lowercase(char *string);

// TODO Implement this function.
void make_vowels_uppercase(char *string);

// TODO Implement this function.
void delete_following_words(char *string);

int main (void) {
    char my_string[] =  "Many chars";

    print_string(my_string);
    return 0;
}

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {

}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {

}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
//
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {

}
