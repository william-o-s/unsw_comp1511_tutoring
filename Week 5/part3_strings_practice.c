// part3_strings_practice.c
//
// This program was written by William (z5388080)
// on 11 March 2024
//
// This program demonstrates how to work with strings in C.

#define MAX_CHARS 100

#include <stdio.h>

int is_lowercase(char c);
int is_uppercase(char c);
int is_letter(char c);
char to_lowercase(char c);
char to_uppercase(char c);
int is_vowel(char c);

int count_lowercase(char string[MAX_CHARS]);
void make_vowels_uppercase(char string[MAX_CHARS]);
void delete_following_words(char string[MAX_CHARS]);

int main(void) {
    char my_string[MAX_CHARS] = "Hello World!";

    printf("count_lowercase(my_string) = %d\n", count_lowercase(my_string));

    return 0;
}

// Provided char functions

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
    if (is_uppercase(c)) {
        return c - 'A' + 'a';
    }

    return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a'
        || lower_c == 'e'
        || lower_c == 'i'
        || lower_c == 'o'
        || lower_c == 'u';
}

// Functions to implement:

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char string[MAX_CHARS]) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (is_lowercase(string[i])) {
            count++;
        }
    }
    return count;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char string[MAX_CHARS]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }
    }
}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
//
// (hint. what defines when a string ends?)
void delete_following_words(char string[MAX_CHARS]) {
    for (int i = 0; string[i] != '\0'; i++) {
        // end the string with a null terminator
        if (string[i] == ' ') {
            string[i] = '\0';
        }
    }
}