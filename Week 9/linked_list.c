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

// Returns a copy of the linked list.
struct node *copy(struct node *head);

// Returns a new linked list where it is the second appended to the first
// The first and second list should not be altered or affected
// The new list should be a whole new copy
struct node *list_append(struct node *first_list, struct node *second_list);

// Frees the given list.
void free_list(struct node *head);

int main(void) {

    // TODO: Test the functions

    return 0;
}

// TODO: Complete this function
struct node *copy(struct node *head) {
    return NULL;
}

// TODO: Complete this function
struct node *list_append(struct node *first_list, struct node *second_list) {
    return NULL;
}

// TODO: Complete this function
void free_list(struct node *head) {
    return;
}
