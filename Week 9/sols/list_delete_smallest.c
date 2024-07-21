struct node *list_delete_smallest(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
     
    struct node *current = head;
    struct node *smallest_prev = NULL,;
    struct node *prev = NULL;

    int smallest_data = head->data;
    
    while (current->next != NULL) {
        if (current->next->data < smallest_data) {
            smallest_data = current->next->data;
            smallest_prev = current;
        }
        current = current->next;
    }
    
    if (smallest_prev == NULL) {
        current = head;
        head = head->next;
    } else {
        current = smallest_prev->next;
        smallest_prev->next = current->next;
    }
    
    free(current);
    return head;
}
