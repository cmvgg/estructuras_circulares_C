#include "../circular_lists.h"

void swap(Node **head) {
    if (!(*head) || /*comprobar si el next de head es head*/)
    return;
    //crear temp y darle el valor del head
    (*head)->value = (*head)->next->value;
    //introducir el valor de temp en el value de la 2ª posición 
}