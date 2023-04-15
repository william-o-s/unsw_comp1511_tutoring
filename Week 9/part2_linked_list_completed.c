// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

// Append to a linked list
struct node *add_last(struct node *head, int data);

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of the linked list
struct node *copy(struct node *head);

// Returns a new linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, struct node *second_list);

int main(void) {

    // TODO: Test the functions
    
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *old_head) {
    if (old_head == NULL) {
        return NULL;
    }
    struct node *new_head = create_node(old_head->data);

    // new_prev keeps track of the previous node before the new one
    struct node *new_prev = new_head;
    // old_curr keeps track of the data from the old linked list we want to copy
    struct node *old_curr = old_head->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
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
