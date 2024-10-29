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
    return 0;
}