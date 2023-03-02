// A sample demonstration of structs in C
// Written by William Setiawan (z5388080)
//  on 2/3/2023

#include <stdio.h>

////////////////////////////// NOTE THE LOCATION //////////////////////////////
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};
////////////////////////////////// ABOVE MAIN //////////////////////////////////

int main(void) {
    // TODO: Initialise `struct person jessica`
    struct person jessica;
    jessica.shoe_size = 12;
    jessica.height = 4.3;
    jessica.first_name_initial = 'J';

    // TODO: Initialise `struct person tom`
    struct person tom;
    tom.shoe_size = 20;
    tom.height = 2.2;
    tom.first_name_initial = 'T';

    // TODO: Print the shoe_size of tom
    printf("%d\n", tom.shoe_size);

    // TODO: Print the height and first_name_initial of tom
    printf("%c height: %lf\n", tom.first_name_initial, tom.height);

    // TODO: Change the height and first_name_initial of tom
    tom.height = 1.80;
    tom.first_name_initial = 'J';

    return 0;
}