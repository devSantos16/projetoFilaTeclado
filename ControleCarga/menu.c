
#include <stdio.h>
#include "vetor.h"

void UITerminal(int vetor[], int tamanho) {
    int option = -1;
    int valor = 0;

    while (option != 0) {
        printf("\nDigite 1 para empilhar ");
        printf("\nDigite 2 para desempilhar ");
        printf("\nDigite 3 para mostrar o valor no topo ");
        printf("\nDigite 4 para mostrar todos os valores ");
        printf("\nDigite 5 para mostrar o tamanho ");
        printf("\nDigite 6 para mostrar se está vazia ");
        printf("\nDigite 7 para esvaziar a pilha");
        printf("\nDigite 0 para parar a execução\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                adicionar(vetor, tamanho);
                break;
            case 2:
                removerUltimo(vetor, tamanho);
                break;
            case 3:
                imprimir(vetor,tamanho, 1);
                break;
            case 4:
                imprimir(vetor, tamanho, 0);
                break;
            case 5:
                imprimirTamanho(tamanho);
                break;
            case 6:
                checarVazio(vetor, tamanho);
                break;
            case 7:
                esvaziar(vetor, tamanho);
                break;
            case 0:
                break;
        }

    }
}