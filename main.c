#include <stdio.h>
#include "binaryTree.h"

int main() {
    Node * root = NULL;

    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 22);
    root = insert(root, 11);
    root = insert(root, 9);
    root = insert(root, 3);
    root = insert(root, 18);
    root = insert(root, 23);
    root = insert(root, 4);
    root = insert(root, 26);
    root = insert(root, 30);

    printf("\nImprimir arbol\nPreOrden:\n");
    preOrden(root);
    printf("\nImprimir arbol\nInOrden:\n");
    inOrden(root);
    printf("\nImprimir arbol\nPostOrden:\n");
    postOrden(root);
    return 0;
}
