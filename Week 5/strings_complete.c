#include <stdio.h>

/**
 * Please Ctrl+F on the word: NOTE
 */

void print_string(char *string);

// Functions to implement:
int count_lowercase(char *string);
void make_vowels_uppercase(char *string);
void delete_following_words(char *string);

// Helpful string functions
int is_lowercase(char c);
int is_uppercase(char c);
int is_letter(char c);
char to_lowercase(char c);
char to_uppercase(char c);
int is_vowel(char c);

int main (void) {
    char my_string[] =  "Many chars";
    print_string(my_string);

    // count_lowercase()
    printf("There are %d lowercase characters in my_string\n",
        count_lowercase(my_string));

    // make_vowels_uppercase()
    make_vowels_uppercase(my_string);
    printf("my_string: ");
    print_string(my_string);

    // delete_following_words()
    delete_following_words(my_string);
    printf("my_string: ");
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
    int total = 0;

    // NOTE: This is a somewhat complicated way of going through a string, but
    // remember that a for loop is just a shorter while loop. It starts at i=0,
    // and increments i, and the stopping condition is that the letter at the
    // current index cannot be equal to the null terminator, i.e. we have not
    // reached the end of the string yet.
    for (int i = 0; string[i] != '\0'; i++) {
        if (is_lowercase(string[i])) {
            total++;
        }
    }

    return total;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
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
void delete_following_words(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (!is_letter(string[i])) {
            // NOTE: notice that this is a NOT operator, i.e. not a letter
            string[i] = '\0';
        }
    }
}

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

    return lower_c == 'a' ||
        lower_c == 'e' ||
        lower_c == 'i' ||
        lower_c == 'o' ||
        lower_c == 'u';
}