// William Setiawan (z5388080)
// on 13/6/2023

#include <stdio.h>

enum opal_card_type { ADULT, STUDENT, CONCESSION };

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card_type;
};

int main(void) {
    ///////////////////////////////// Structs /////////////////////////////////

    struct person jessica;
    jessica.shoe_size = 14;
    jessica.height = 200;
    jessica.first_name_initial = 'J';

    struct person tom;
    tom.shoe_size = 6;
    tom.height = 140;
    tom.first_name_initial = 'T';

    printf("Shoe sizes: %d %d\n", jessica.shoe_size, tom.shoe_size);

    printf("%c: %lf\n%c: %lf\n",
        jessica.first_name_initial,
        jessica.height,
        tom.first_name_initial,
        tom.height);

    jessica.shoe_size = jessica.height * 2;
    tom.shoe_size = tom.height * 2;
    printf("Shoe sizes: %d %d\n", jessica.shoe_size, tom.shoe_size);

    ////////////////////////////////// Enums //////////////////////////////////

    enum opal_card_type student_card = STUDENT;

    jessica.card_type = ADULT;
    tom.card_type = student_card;
    printf("Cards: %d %d\n", jessica.card_type, tom.card_type);

    return 0;
}
