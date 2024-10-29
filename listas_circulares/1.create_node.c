#include "../circular_lists.h"

// Crea un nuevo nodo con un valor dado y lo inicializa como circular.
Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
        return NULL;
    //debes introducir el valor value en el nodo
    newNode->next = newNode; // Apunta a sí mismo para hacerla circular
    return newNode;
}