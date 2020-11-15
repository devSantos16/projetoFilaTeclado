#include <stdio.h>
#include <stdlib.h>
#include "tecla.h"
Tecla* criar(char caracter){
    Tecla *header = NULL;
    header = (Tecla*)malloc(sizeof(Tecla));

    if(header == NULL){
        printf("ERROR");
        exit(2);
    }
    header->bind = caracter;
    header->proximo = NULL;
    return header;
}

void adicionarAoFinal(Tecla *head, char caracter){
    Tecla* atual = head;

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
    Tecla* atual = header;
    do{
       printf("Valor: %c\n",atual->bind);
        atual=atual->proximo;
    }
    while(atual != NULL);
}
