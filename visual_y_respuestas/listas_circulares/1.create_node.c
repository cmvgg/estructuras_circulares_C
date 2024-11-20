#include "../circular_lists.h"

Node *createNode(int value, int *i) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    char newDotContent[100] = {0};
    char insertPoint[100] = {0};
    char comparation[100] = {0};
    static int value1;

    sprintf(newDotContent, "\t\t\tnode%d [label=\" \"]; ", i[0]);
    sprintf(insertPoint, "\t\t\tedge [splines=curved];");

    sprintf(comparation, "\t\t\tnode1");
    replaceDotContent(newDotContent, insertPoint, 2);
    sleep(2);

    if (!newNode) {
        return NULL;
    }

    newNode->value = value;

    if (i[0] == 1) {
        sprintf(newDotContent, "\t\t\tnode%d [label=\"%d\"]; ", i[0], value);
    } else {
        sprintf(newDotContent, "\t\t\tnode%d [label=\"%d\"]; ", i[0], value);
    }

    newNode->next = newNode;
    sleep(2);

    if (newDotContent[7] == comparation[7]) {
        sprintf(newDotContent, "\t\t\tnode%d -> node%d; ", i[0], (i[0]));
        sprintf(insertPoint, "\t\t\tnode1 [label=\"%d\"]; ", value);

        i[0] += replaceDotContent(newDotContent, insertPoint, 2);
    } else {
        sprintf(newDotContent, "\t\t\tnode%d -> node%d; ", (i[0]), (i[0] - 1));
        int w = (i[0] + 48);

        if (newDotContent[7] == w) {
            char newDotContent2[100] = {0};
            sprintf(newDotContent, "\t\t\tnode1 -> node%d; ", i[0]);
            char insertPoint2[100] = {0};
            sprintf(insertPoint2, "node1 ->");
            replaceDotContent2(newDotContent, insertPoint2, 2);
            sleep(1);
        }

        sprintf(insertPoint, "node%d ->", (i[0] - 1));
        i[0] += replaceDotContent(newDotContent, insertPoint, 1);
        sleep(2);
    }

    value1 = value;    
    return newNode;
}
