#include "../circular_lists.h"

void printList(Node *head) {
    if (head == NULL) return;

    Node *temp = head;
    printf("%d", temp->value);

    temp = temp->next;

    while (temp != head) {

        printf(" -> ");
        printf("%d ", temp->value);
        temp = temp->next; //
    }
}
