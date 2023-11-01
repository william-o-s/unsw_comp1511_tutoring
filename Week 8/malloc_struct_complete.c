// William Setiawan (z5388080)

// NOTE: stdlib.h is needed for malloc
#include <stdio.h>
#include <stdlib.h>

// NOTE: next is a pointer to avoid recursive memory allocation
struct node {
    int data;
    struct node *next;
};

struct node *createNode(int data);

int main(void) {
    struct node *head = createNode(3);

    return 0;
}

struct node *createNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}
