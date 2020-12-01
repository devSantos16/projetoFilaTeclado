#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
    Node * raiz=NULL;
    raiz=inserir(raiz,25);
    inserir(raiz,22);
    inserir(raiz,40);
    inserir(raiz,30);
    inserir(raiz,45);
    inserir(raiz,27);
    inserir(raiz,20);

    printf("In Order:\n");
    inOrder(raiz);

    printf("\nPos Ordem:\n");
    posOrder(raiz);

    printf("\nPre Ordem:\n");
    preOrder(raiz);

    removeBiggest(raiz);

    printf("\nIn Order:\n");
    inOrder(raiz);

    removeSmallest(raiz);

    printf("\nIn Order:\n");
    inOrder(raiz);

    return 0;
}
