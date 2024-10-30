#ifndef CIRCULAR_LISTS_H
#define CIRCULAR_LISTS_H

#include <stdlib.h>
#include <stdio.h>

// Definición de la estructura Node para una lista circular
typedef struct Node {
    int value;
    struct Node *next;
} Node;

// Crea un nuevo nodo con un valor dado.
Node *createNode(int value);

// Inserta un nodo al inicio de la lista circular.
void insertAtStart(Node **head, int value);

// Imprime todos los elementos de la lista circular.
void printList(Node *head);

// Intercambia los valores de los dos primeros nodos de la lista.
void swap(Node *head);

// Mueve el primer nodo de la lista de origen a la lista de destino.
void push(Node **source, Node **destination);

// Rota la lista para que el segundo nodo se convierta en el primero.
void rotate(Node **head);

// Rota en sentido inverso para que el último nodo sea el primero.
void reverseRotate(Node **head);

// Cuenta y retorna la cantidad de nodos en la lista.
int countNodes(Node *head);

#endif // CIRCULAR_LIST_H
