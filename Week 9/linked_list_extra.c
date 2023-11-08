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

// Append to a linked list
struct node *add_last(struct node *head, int data);

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of the linked list.
struct node *copy(struct node *head);

// Returns a new linked list where it is the second appended to the first
// The first and second list should not be altered or affected
// The new list should be a whole new copy
struct node *list_append(struct node *first_list, struct node *second_list);

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list);

// Given two lists in strictly increasing order, perform the set operation: intersection.
// Return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *first_list, struct node *second_list);

/** REVISION FUNCTIONS **/

// Deletes the last node of the given linked list and returns the head of
// the linked list
struct node *delete_last(struct node *head);

// Returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head);

// Given two linked lists in strictly increasing order, perform the set operation: union.
// Return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// which has no duplicates (only include them once)
struct node *set_union(struct node *first_list, struct node *second_list);

// Frees all the elements in a linked list
void free_list(struct node *head);

// Return the number of items in the linked list
int num_items(struct node *head);

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

struct node *copy(struct node *list) {
    return NULL;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    return NULL;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}
