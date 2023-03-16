// String Functions Practice
// Written by William Setiawan (z5388080)
//  on 16/3/2023

#include <stdio.h>

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////

// Functions to implement:

// 1. returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
    int total_lowercase = 0;

    int i = 0;
    while (string[i] != '\0') {
        if (is_lowercase(string[i])) {
            total_lowercase++;
        }

        i++;
    }

    return total_lowercase;
}

// 2. modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }

        i++;
    }
}

// 3.. shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {
    int i = 0;
    while (string[i] != '\0' && string[i] != ' ') {
        i++;
    }
    
    string[i] = '\0';
}

int main(void) {
    char my_string[] = "It's Week 5!";

    // 1.
    printf("My String: ");
    fputs(my_string, stdout);
    printf("\n");
    printf("Number of lowercase letters: %d\n", count_lowercase(my_string));

    // 2.
    make_vowels_uppercase(my_string);
    printf("My String: ");
    fputs(my_string, stdout);
    printf("\n");

    // 3.
    delete_following_words(my_string);
    printf("My String: ");
    fputs(my_string, stdout);
    printf("\n");

    return 0;
}