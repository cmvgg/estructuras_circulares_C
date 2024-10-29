#include "../circular_lists.h"

void reverseRotate(Node **head) {
    if (/*si cabeza no existe*/ || (*head)->next == *head)
    return;
    Node *temp = *head;
    while (/*el siguiente al siguiente de temp no sea head*/) {
        temp = temp->next;
    }
    *head = temp->next;
    //el siguiente a temp debe contener el head
}