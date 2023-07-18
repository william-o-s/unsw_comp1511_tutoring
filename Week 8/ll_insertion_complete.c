// William Setiawan (z5388080)
// on 18/7/2023

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode(int data);
struct node *insertNode(struct node *head, int data);
void printList(struct node *head);

int main(void) {
    // Notice how much cleaner this is!
    struct node *head = insertNode(NULL, 1);
    head = insertNode(head, 2);
    head = insertNode(head, 3);
    head = insertNode(head, 4);
    head = insertNode(head, 5);

    printList(head);

    return 0;
}

struct node *createNode(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

struct node *insertNode(struct node *head, int data) {
    // NOTE: I prefer doing this at the top because I
    // can guarantee this always happens
    struct node *new = createNode(data);

    if (head == NULL) {
        // NOTE: this is called a guard
        return new;
    }

    // NOTE: Also notice that after the guard, I can
    // assume that current will never be NULL
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // NOTE: When the above loop ends, current is at tail
    current->next = new;
    return head;
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
