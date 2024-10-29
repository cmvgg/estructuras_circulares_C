#include "../circular_lists.h"

void push(Node **source, Node **destination) {
    if (/*comprobar si source existe*/)
    return;
    //crear value y darle el valor source
    Node *temp = *source;

    if (/*comprobar si source es el último valor de la lista circular*/) {
        *source = NULL;
    } else {
        Node *last = *source;
        while (/*hasta que last sea el ultimo valor de la lista circular*/) {
            last = last->next;
        }
        //*source contiene el segundo valor
        //hacer circular dando el valor source a last next
    }
    //liberar temp
    insertAtStart(destination, value);
}