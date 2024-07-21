struct node *list_reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}
