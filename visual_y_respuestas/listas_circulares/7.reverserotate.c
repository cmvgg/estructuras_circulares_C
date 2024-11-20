#include "../circular_lists.h"

void reverseRotate(Node **head) {
    if (!(*head) || (*head)->next == *head) // Si la cabeza no existe o es el único nodo
        return;

    Node *temp = *head;
    while (temp->next->next != *head) { // Encontrar el penúltimo nodo
        temp = temp->next;
    }

    *head = temp->next;      // El último nodo se convierte en la nueva cabeza
    temp->next = *head;      // El penúltimo nodo apunta a la nueva cabeza
}
