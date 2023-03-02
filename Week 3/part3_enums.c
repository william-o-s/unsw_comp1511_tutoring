// A sample demonstration of enums in C
// Written by William Setiawan (z5388080)
//  on 2/3/2023

#include <stdio.h>

// Are these the same?
// #define ADULT 0
// #define CHILD 1
// #define CONCESSION 2

////////////////////////////// NOTE THE LOCATION //////////////////////////////
enum opal_card_type {
    ADULT,
    CHILD,
    CONCESSION
};
////////////////////////////////// ABOVE MAIN //////////////////////////////////

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card_type;
};

int main(void) {
    // TODO: Initialise `enum opal_card_type card_type` to a CHILD
    enum opal_card_type card_type = CHILD;
    // enum opal_card_type card_type = PENSIONER;

    // TODO: Can you initialise an enum to PENSIONER?

    // TODO: Add the opal_card_type to struct person
    struct person jessica;
    jessica.shoe_size = 12;
    jessica.height = 4.3;
    jessica.first_name_initial = 'J'; 
    jessica.card_type = ADULT;

    int ADULT = 100;
    int value_of_adult = ADULT;
    printf("%d\n", ADULT);

    // TODO: Write an if statement for the opal_card_type
    if (jessica.card_type == ADULT) {
        printf("Has an Adult opal card\n");
    }

    return 0;
}