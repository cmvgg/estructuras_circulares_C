#include "../circular_lists.h"

void printList(Node *head) {
    if (/*comprobar si la cabeza existe*/) return;
    Node *temp = head;
    printf("%d -> ", /*imprimir el valor del temp*/);
    //dar el valor del next al temp
    while (temp != head) {
        printf("%d -> ", temp->value);
    //dar a temp el siguiente valor
    }
    printf("circular\n");
}
