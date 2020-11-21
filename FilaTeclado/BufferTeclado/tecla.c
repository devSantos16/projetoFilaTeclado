#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tecla.h"

Tecla* criar(char caracter){
    Tecla *header = NULL;
    header = (Tecla*)malloc(sizeof(Tecla));

    if(Vazia(header)){
        printf("ERROR");
        exit(2);
    }
    header->bind = caracter;
    header->proximo = NULL;
    return header;
}

void Enfileirar(Tecla *header, char caracter){
    Tecla* atual = header;

    while(atual->proximo!=NULL)
    {
        atual=atual->proximo;
    }
    //CRIA NOVA TECLA
    Tecla* newTecla = criar(caracter);
    //SETA NOVO TECLA COMO ULTIMO
    atual->proximo= newTecla;
}

void imprimir(Tecla* header){
    printf("\nImprimindo:\n");
    if(Vazia(header))
    {
        printf("Lista Vazia/Nula\n");
        return;
    }

    int i=10;
    Tecla* atual = header;
    do{
       printf("Valor: %c\n",atual->bind);
        atual=atual->proximo;
        i--;
    }
    while(atual != NULL && i>0);
    printf("\n");
}

Tecla* Esvazia(Tecla* header)
{
    printf("\nEsvaziando!!!\n");
    Tecla* atual = header;//proximo
    Tecla* atual2 = header;//atual

    while(atual2!=NULL)
    {
        atual=atual->proximo;
        free(atual2);

        atual2=atual;
    }

    header=NULL;
    return NULL;
}

bool Vazia(Tecla* header)
{
    if(header==NULL)// || header->bind==NULL || header->proximo==NULL)
    {
        return true;
    }
    return false;
}

char Primeiro(Tecla* header)
{
    if(Vazia(header))
    {
        printf("\nNão deu pra pegar o primeiro pq lista ta vazia/NULA.\n");
        return;
    }
    return header->bind;
}
