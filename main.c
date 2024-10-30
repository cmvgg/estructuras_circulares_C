#include "circular_lists.h"

int main(int argc, char **argv) {
    Node *stackA = NULL;
    Node *stackB = NULL;

    if(argc <=1)
        printf("inserte más valores por argumentos");
    printf("Insertando nodos en stackA:\n");
  for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]);
        insertAtStart(&stackA, value);
    }
    printList(stackA);

    printf("\nProbando swap en stackA:\n");
    swap(stackA);
    printList(stackA);

    printf("\nMoviendo nodo de stackA a stackB:\n");
    push(&stackA, &stackB);
    printList(stackA);
    printList(stackB);
     push(&stackB, &stackA);
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
