//
// Created by Frederico Jacobi on 15/11/20.
//
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int apontaParaUltimo(int vetor[], int tamanho) {
    int posicao;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == '\0') {
            posicao = i - 1;
            return posicao;
        }
    }
}

int adicionar(int vetor[], int tamanho) {
    int valor;
    printf("Digite o valor a ser empilhado: ");
    scanf("%d", &valor);
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == '\0') {
            vetor[i] = valor;
            UITerminal(vetor, tamanho);
        }
    }
    printf("A pilha já está cheia.");
    UITerminal(vetor, tamanho);
}

void esvaziar(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = '\0';
    }
}

void imprimir(int vetor[], int tamanho, int ZeroParaTodos1paraTopo) {
    int posicao = apontaParaUltimo(vetor, tamanho);
    if (ZeroParaTodos1paraTopo == 0) {
        for (int i = 0; i < tamanho; i++) {
            printf("Vetor[%d] valor : %d\n", i, vetor[i]);
        }
    } else {
        printf("O valor do topo é: %d", vetor[posicao]);
    }
}

void imprimirTamanho(int tamanho) {
    printf("O tamanho do vetor é de: %d posições.", tamanho);
}

int checarVazio(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != '\0') {
            printf("A pilha não está vazia.");
            return 0;
        }
    }
    printf("A pilha está vazia.");
}

void definirTamanho() {
    int tamanho;
    int *vetor;
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *) malloc(tamanho * sizeof(int));
    UITerminal(vetor, tamanho);
}

void removerUltimo(int vetor[], int tamanho) {
    int posicao = apontaParaUltimo(vetor, tamanho);
    vetor[posicao] = '\0';
}