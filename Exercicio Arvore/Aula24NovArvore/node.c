#include <stdio.h>
#include <stdlib.h>
#include "node.h"


Node *criar(int novoValor)
{
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->valor=novoValor;
    temp->esq=temp->dir=NULL;
    return temp;
}

Node *inserir(Node *raiz, int novoValor)
{
    if(raiz==NULL)
    {
        return criar(novoValor);
    }

    if(novoValor<raiz->valor)
    {
        //esq
        raiz->esq=inserir(raiz->esq,novoValor);
    }
    else
    {
        //dir
        raiz->dir=inserir(raiz->dir,novoValor);
    }

    return raiz;
}

void inOrder(Node *raiz){
    if(raiz!=NULL)
    {
        inOrder(raiz->esq);
        printf("%d\n",raiz->valor);
        inOrder(raiz->dir);
    }
}

void preOrder(Node *raiz){
    if(raiz!=NULL)
    {
        printf("%d\n",raiz->valor);
        preOrder(raiz->esq);
        preOrder(raiz->dir);
    }
}

void posOrder(Node *raiz){
    if(raiz!=NULL)
    {
        posOrder(raiz->esq);
        posOrder(raiz->dir);
        printf("%d\n",raiz->valor);
    }
}

void removeBiggest(Node *raiz)
{
    if(raiz==NULL)
    {
        return;
    }
    if(raiz->dir==NULL)
    {
        return;
    }
    Node* raizTempPai=raiz;
    Node* raizTemp=raiz->dir;//cara a tirar

    while(raizTemp->dir!=NULL)
    {
        raizTempPai=raizTemp;
        raizTemp=raizTemp->dir;
    }

    printf("\nValor(Maior) retirado foi o: %d\n",raizTemp->valor);

    if(raizTemp->esq!=NULL)
    {
        raizTempPai->dir=raizTemp->esq;
        free(raizTemp);
    }
    else
    {
        free(raizTemp);
        raizTempPai->dir=NULL;
    }

}

void removeSmallest(Node *raiz)
{
    if(raiz==NULL)
    {
        return;
    }
    if(raiz->esq==NULL)
    {
        return;
    }
    Node* raizTempPai=raiz;
    Node* raizTemp=raiz->esq;//cara a tirar

    while(raizTemp->esq!=NULL)
    {
        raizTempPai=raizTemp;
        raizTemp=raizTemp->esq;
    }

    printf("\nValor(Menor) retirado foi o: %d\n",raizTemp->valor);

    if(raizTemp->dir!=NULL)
    {
        raizTempPai->esq=raizTemp->dir;
        free(raizTemp);
    }
    else
    {
        free(raizTemp);
        raizTempPai->esq=NULL;
    }

}
