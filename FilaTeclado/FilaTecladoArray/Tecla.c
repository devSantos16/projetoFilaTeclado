#include <stdio.h>
#include <stdlib.h>
#include "Tecla.h"

FilaTeclas* criar(char tecla){
    FilaTeclas *header = NULL;
    header = (FilaTeclas*)malloc(sizeof(FilaTeclas));

    if(header == NULL){
        printf("ERROR 400");
        exit(4);
    }

    header->Teclas[0] = tecla;
    header->Inicio = 0;
    header->Fim = 1;
    header->chegouNoMax = false;

    return header;
}
void enfileirar(FilaTeclas *header, char tecla){
    if(header->chegouNoMax == true){
        printf("Lista cheia");
        return;
    }

    header->Teclas[header->Fim] = tecla;
    header->Fim++;

    int sizeTemp = sizeof(header->Teclas) / sizeof(char);
    if(header->Fim - 1 == sizeTemp){
            header->Fim == 0;
    }
    // Checar se a lista é cheia
    cheia(header);

}
void esvaziar(FilaTeclas *header){
    header->Inicio = 0;
    header->Fim = 0;
    header->chegouNoMax = false;
}

int vazia(FilaTeclas *header){
    if(header->Inicio == header->Fim){
        return 1;
    }
    else {
        return 0;
    }
}

int cheia(FilaTeclas *header){
    int fimTemp = header->Fim + 1;
    int sizeTemp = sizeof(header->Teclas) / sizeof(char);
    if(fimTemp - 1 == sizeTemp){

    }
    if(header->Inicio == fimTemp){
        printf("Tá cheio");
        header->chegouNoMax = true;
        return 1;
    }
    return 0;
}

void imprimir(FilaTeclas *header){
    if(header == NULL || vazia(header) == 1){
        printf("Não tem nada");
        exit(4);
    }
    int cont = header->Inicio;
    while(cont != header->Fim){
        printf("Valor: %c\n", header->Teclas[cont]);
        cont++;
        if(cont - 1 == sizeof(header->Teclas)/sizeof(char)){
            cont = 0;
        }
    }
}


