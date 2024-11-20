#include "../circular_lists.h"

Node* swap(Node *head, int *i) {
    if (!head || head->next == head) // Comprobar si la lista está vacía o tiene solo un nodo
        return head;

    int temp = head->value; // Crear temp y darle el valor de head
	/*char H[100]  = {0};
	sprintf(H, "\t\t\tnode%d [label=\"%d\"]; ", (i[0] - 1), head->value);
	replaceDotContent3(H, "edge	[splines=curved];", 1);
    
	char J[100]  = {0};
	//sprintf(H, "\t\t\tnode%d [label=\"%d\"]; ", (i[0] - 1), head->value);
	sprintf(J, "\t\t\tnode%d [label=\"%d\"]; ", (i[0]), head->next->value);
	replaceDotContent3(J, H, 2);
	sprintf(J, "\t\t\tnode%d [label=\"%d\"]; ", (i[0]), head->next->value);
	sprintf(H, "\t\t\tnode%d [label=\"%d\"]; ", (i[0] - 1), (head->value + 1));
	replaceDotContent3(H, J, 2);*/
	head->value = head->next->value; // Asignar el valor del segundo nodo al primer nodo
	//sprintf(H, "\t\t\tnode%d [label=\"%d\"]; ", (i[0] - 2), head->value);
	//replaceDotContent3(H, J, 2);
    head->next->value = temp; // Introducir el valor de temp en el segundo nodo

    return head; // Retornar la cabeza de la lista
}
