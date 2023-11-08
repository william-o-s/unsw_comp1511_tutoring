// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Edited by William (z5388080)

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

struct node *copy(struct node *head);
struct node *list_append(struct node *first_list, struct node *second_list);
void free_list(struct node *head);

int main(void) {

    // TODO: Test the functions

    return 0;
}

struct node *copy(struct node *head) {
    // Guard: empty list
    if (head == NULL) {
        return NULL;
    }
    struct node *new_head = create_node(head->data);

    // new_prev keeps track of the previous node before the new one
    struct node *new_prev = new_head;
    // old_curr keeps track of the data from the old linked list we want to copy
    struct node *old_curr = head->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // Guard: empty list
    if (first_list == NULL) {
        return copy(second_list);
    }

    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    struct node *curr = first_copy;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = second_copy;

    return first_copy;
}

void free_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current->next;
        free(current);
        current = temp;
    }
}
