#include "circular_lists.h"

int main(int argc, char **argv) {
    Node *stackA = NULL;
    Node *stackB = NULL;
    int x = 1;

    if(argc <= 1)
        printf("inserte más valores por argumentos");
    printf("Insertando nodos en stackA:\n");

  for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]);
        insertAtStart(&stackA, value, &x);
    }
    printList(stackA);

    printf("\nProbando swap en stackA:\n");
    swap(stackA, &x);
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
sleep(5);
	FILE *source = fopen("backup.html", "rb");
    FILE *destination = fopen("prueba.html", "wb");
    if (!source || !destination) {
        perror("Error al abrir los archivos");
        return 1;
    }

    char buffer[4096];
    size_t bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), source)) > 0) {
        fwrite(buffer, 1, bytes, destination);
    }

    fclose(source);
    fclose(destination);
    printf("Archivo copiado con éxito\n");
    return 0;
}
