#include "../circular_lists.h"

void insertAtStart(Node **head, int value) {
    Node *newNode = createNode(value);
    if (!(*head)) {
    // Asignar el nuevo nodo como la cabeza de la lista
    } else {
        Node *temp = *head;
        while (/* Recorrer hasta llegar al último nodo que apunta a la cabeza*/) {
            temp = temp->next;
        }
        // Hacer que el último nodo apunte al nuevo nodo
        newNode->next = *head;
        // Actualizar la cabeza para que sea el nuevo nodo
    }
}
