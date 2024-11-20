#include "../circular_lists.h"

int countNodes(Node *head) {
    if (!head) // Si no hay cabeza
        return 0;

    int count = 1;
    Node *temp = head->next;
    while (temp != head) { // Mientras temp no sea la cabeza
        count++;
        temp = temp->next; // Temp pasa al siguiente nodo
    }

    return count; // Retorna el número de nodos
}
