#include "../circular_lists.h"

void rotate(Node **head) {
    if (!(*head) || (*head)->next == *head) // Si la lista está vacía o tiene un solo nodo, no se rota
        return;

    *head = (*head)->next; // Mover la cabeza a la segunda posición
}
