struct node *list_append(struct node *head1, struct node *head2) {
    if (!head1) return head2;
    struct node *current = head1;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = head2;
    return head1;
}
