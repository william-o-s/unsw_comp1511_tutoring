struct node *list_ordered_insert(struct node *head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    
    struct node *prev = NULL;
    struct node *curr = head;
    while (curr != NULL && curr->data < value) {
        prev = curr;
        curr = curr->next;
    }
    
    if (prev == NULL) {
        new_node->next = head;
        head = new_node;
    } else {
        prev->next = new_node;
        new_node->next = curr;
    }
    
    return head;
}