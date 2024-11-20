#include "../circular_lists.h"

void push(Node **source, Node **destination) {
    if (!(*source)) // Comprobar si source existe
        return;

    int value = (*source)->value; // Crear value y darle el valor de source
    Node *temp = *source;

    if ((*source)->next == *source) { // Comprobar si source es el último nodo en la lista circular
        *source = NULL; // Si es el último nodo, source ahora es NULL
    } else {
        Node *last = *source;
        while (last->next != *source) { // Encontrar el último nodo de la lista circular
            last = last->next;
        }
        *source = (*source)->next; // *source apunta al segundo nodo
        last->next = *source; // Hacer circular la lista
    }

    free(temp); // Liberar el nodo original de source
    //insertAtStart(destination, value, 5); // Insertar el valor en la lista destination
}
