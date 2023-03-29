// Part 4: Malloc and Arrays
// Edited by William Setiawan (z5388080)
//  on 30/03/2023

#include <stdlib.h>

#define ARRAY_SIZE 10
#define NUM_PETS 5

struct pet {
    int age;
    int weight;
    char name[100];
};

int main(void) {

    int *i = malloc(sizeof(int));
    int *j = malloc(sizeof(*j));

    double *d = malloc(sizeof(double));
    double *e = malloc(sizeof *e);

    int array1[ARRAY_SIZE];
    int *array2 = malloc(ARRAY_SIZE * sizeof(int));

    struct pet *coco = malloc(sizeof(struct pet));
    struct pet *class_pets = malloc(NUM_PETS * sizeof(struct pet));

    // EXTRA: Printing out the pointer
    printf("Pointer address: %p\n", i);
}