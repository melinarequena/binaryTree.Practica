//
// Created by Administrador on 4/10/2023.
//

#ifndef BINARYTREE_PRACTICA_BINARYTREE_H
#define BINARYTREE_PRACTICA_BINARYTREE_H
#include<stdbool.h>

typedef struct node {
    int valor;
    struct node * der;
    struct node * izq;
} Node;

Node * newNode(int valor);
Node * insert(Node * root, int valor);
void preOrden(Node * root);
void inOrden(Node * root);
void postOrden(Node * root);
void porNivel(Node * root);
bool existe(Node * root, int valorBuscaado);

#endif //BINARYTREE_PRACTICA_BINARYTREE_H
