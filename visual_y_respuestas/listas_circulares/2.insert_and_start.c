#include "../circular_lists.h"

void insertAtStart(Node **head, int value, int *i) {
    Node *newNode = createNode(value, i);
    if (!(*head)) {
        // Asignar el nuevo nodo como la cabeza de la lista
        *head = newNode;
    } else {
        Node *temp = *head;
        // Recorrer hasta llegar al último nodo que apunta a la cabeza
        while (temp->next != *head) {
            temp = temp->next;
        }
        // Hacer que el último nodo apunte al nuevo nodo
        temp->next = newNode;
        // El nuevo nodo apunta a la antigua cabeza
        newNode->next = *head;
        // Actualizar la cabeza para que sea el nuevo nodo
        *head = newNode;
    }
}