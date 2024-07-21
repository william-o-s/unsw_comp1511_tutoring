// Helper function to check if a value exists in a list.
int exists_in_list(struct node *head, int data) {
    struct node *current = head;
    while (current != NULL) {
        if (current->data == data) return 1;
        current = current->next;
    }
    return 0;
}

// Function to find intersection of two lists.
struct node *list_find_intersection(struct node *head1, struct node *head2) {
    struct node *result = NULL;
    
    while (head1 != NULL) {
        if (exists_in_list(head2, head1->data) && 
            !exists_in_list(result, head1->data)) 
        {
            struct node *new_node = malloc(sizeof(struct node));
            new_node->data = data;
            new_node->next = NULL;
            
            if (result == NULL) {
                result = new_node;
            } else {
                struct node *current = result;
                while (current->next != NULL) {
                    current = current->next;
                }
                current->next = new_node;
            }
        }
        head1 = head1->next;
    }
    
    return result;
}