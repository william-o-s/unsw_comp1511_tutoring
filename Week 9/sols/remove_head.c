struct node *remove_head(struct node *head) {
    // If the linked list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // Store the head node in a temporary variable
    struct node *temp = head;
    // Update the head to point to the next node
    head = head->next;
    // Free the memory allocated for the old head node
    free(temp);

    return head;
}