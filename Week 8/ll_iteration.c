// William Setiawan (z5388080)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode(int data);
void printList(struct node *head);

// Goal: create a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> X
int main(void) {
    // Version 1
    struct node *head_1 = createNode(1);
    struct node *tail_1 = head_1;

    tail_1->next = createNode(2);
    tail_1 = tail_1->next;

    tail_1->next = createNode(3);
    tail_1 = tail_1->next;

    tail_1->next = createNode(4);
    tail_1 = tail_1->next;

    tail_1->next = createNode(5);
    tail_1 = tail_1->next;

    printList(head_1);

    // Version 2
    struct node *head_2 = createNode(1);
    struct node *tail_2 = head_2;
    for (int i = 2; i <= 5; i++) {
        tail_2->next = createNode(i);
        tail_2 = tail_2->next;
    }

    printList(head_2);

    return 0;
}

struct node *createNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

void printList(struct node *head) {
    // NOTE: using current instead of head
    struct node *current = head;
    // NOTE: tail nodes precede NULL
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}
