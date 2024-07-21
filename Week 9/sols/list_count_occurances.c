int list_count_occurrences(struct node *head, int data) {
    int count = 0;
    while (head != NULL) {
        if (head->data == data) {
            count++;
        }
        head = head->next;
    }
    return count;
}
