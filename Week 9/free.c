// Written by William (z5388080)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data, struct node *next) {
    struct node *new = malloc(sizeof(*new));
    new->data = data;
    new->next = next;
    return new;
}

int main(void) {
    // Initialise list
    struct node *head = create_node(1, NULL);

    char progress = 'N';
    printf("Continue? ");
    if (scanf(" %c", &progress) == 1 && progress != 'Y') {
        return 0;
    }

    // Free head
    free(head);

    // Use after free
    printf("%d\n", head->data);

    return 0;
}