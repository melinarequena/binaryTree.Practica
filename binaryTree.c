//
// Created by Administrador on 4/10/2023.
//

#include "binaryTree.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int valor) {
    Node * aux = malloc(sizeof(Node));

    if ( aux == NULL ) {
        printf("run out of memory");
        exit(-1);
    }

    aux->valor = valor;
    aux->izq = NULL;
    aux->der = NULL;

    return aux;
}

Node *insert(Node *root, int valor) {

    if (root == NULL ) {
        return newNode(valor);
    }

    if (valor > root->valor ) {
        root->der = insert(root->der, valor);
    } else {
        root->izq = insert(root->izq, valor);
    }

    return root;
}

void preOrden(Node * root){
    if(root == NULL){
        return;
    }
    printf("%d \t", root->valor);
    preOrden(root->izq);
    preOrden(root->der);

}

void inOrden(Node *root) {
    if(root == NULL){
        return;
    }
    inOrden(root->izq);
    printf("%d\t", root->valor);
    inOrden(root->der);

}

void postOrden(Node *root) {
    if(root == NULL){
        return;
    }
    postOrden(root->izq);
    postOrden(root->der);
    printf("%d\t", root->valor);

}
