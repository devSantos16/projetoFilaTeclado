//
// Created by Frederico Jacobi on 15/11/20.
//

#ifndef CONTROLECARGA_VETOR_H
#define CONTROLECARGA_VETOR_H

void adicionar(int vetor[], int tamanho);

void esvaziar(int vetor[], int tamanho);

void imprimir(int vetor[], int tamanho, int ZeroParaTodos1paraTopo);

void imprimirTamanho(int tamanho);

int checarVazio(int vetor[], int tamanho);

void definirTamanho();

int apontaParaUltimo(int vetor[], int tamanho);

void removerUltimo(int vetor[], int tamanho);

#endif //CONTROLECARGA_VETOR_H
