#include "circular_lists.h"

int main() {
    Node *stackA = NULL;
    Node *stackB = NULL;

    printf("Insertando nodos en stackA:\n");
    insertAtStart(&stackA, 10);
    insertAtStart(&stackA, 20);
    insertAtStart(&stackA, 30);
    printList(stackA);

    printf("\nProbando swap en stackA:\n");
    swap(&stackA);
    printList(stackA);

    printf("\nMoviendo nodo de stackA a stackB:\n");
    push(&stackA, &stackB);
    printList(stackA);
    printList(stackB);

    printf("\nProbando rotación en stackA:\n");
    rotate(&stackA);
    printList(stackA);

    printf("\nProbando rotación inversa en stackA:\n");
    reverseRotate(&stackA);
    printList(stackA);

    printf("\nContando nodos en stackA:\n");
    int count = countNodes(stackA);
    printf("Cantidad de nodos en stackA: %d\n", count);

    return 0;
}
