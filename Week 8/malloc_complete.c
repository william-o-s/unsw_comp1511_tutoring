// William Setiawan (z5388080)
// on 18/7/2023

// NOTE: stdlib.h is needed for malloc
#include <stdio.h>
#include <stdlib.h>

// NOTE: next is a pointer to avoid recursive memory allocation
struct node {
    int data;
    struct node *next;
};

// Demonstration
void printSizeof(void);
void mallocArray(void);

struct node *createNode(int data);

int main(void) {
    printSizeof();
    mallocArray();

    struct node *head = createNode(3);

    return 0;
}

void printSizeof(void) {
    // char, int, double: all take up memory
    char c;
    int i;
    double d;

    // Ignore %lu: this stands for unsigned long,
    // which is how we print sizeof
    printf("sizeof(c) == %lu\n", sizeof(c));
    printf("sizeof(i) == %lu\n", sizeof i);
    printf("sizeof(d) == %lu\n", sizeof d);
    printf("sizeof(d) == %lu\n", sizeof(double));
    // NOTE: sizeof only needs parentheses for types
}

void mallocArray(void) {
    // The 'easy' way:
    int *int_array_1 = malloc(10 * sizeof(int));
    // The 'industry' way:
    int *int_array_2 = malloc(10 * sizeof(*int_array_2));

    // Bonus: int_array_1 here is a pointer
    printf("sizeof(int_array_1) == %lu\n", sizeof(int_array_1));

    // Bonus: int_array_3 here is an array
    int int_array_3[10];
    printf("sizeof(int_array_3) == %lu\n", sizeof(int_array_3));
}

struct node *createNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}
