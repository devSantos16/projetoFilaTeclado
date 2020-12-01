#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

node *criar()
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Sem espasso na memoria.");
        exit(1);
    }
    return head;
}

void fPVazia(node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("\nA pilha ja esta vazia\n");
        return;
    }

    node *current = *head_ref;

    while (current->proximo != NULL)
    {
        printf("\nRemovendo o valor: %s", current->info);
        node *temp = current->proximo;
        free(current);
        current = temp;
    }

    printf("\nRemovendo o valor: %s", current->info);
    // free(*head_ref);
    *head_ref = NULL;

    printf("\n\nTodos valores removidos.\n");
}

bool vazia(node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("\nA pilha esta vazia\n");
        return true;
    }

    else
    {
        printf("\nA pilha nao esta vazia\n");
        return false;
    }
}

void empilha(node **head_ref, char value[])
{
    // CRIA NOVO NOH
    node *newNode = criar();

    // PASSA O VALOR PRO NOVO NOH
    strcpy(newNode->info, value);

    // DEFINE O PROXIMO DO NOVO NOH COMO O ANTIGO HEAD
    newNode->proximo = *head_ref;

    // MUDA A REFERENCIA DO ANTIGO HEAD PARA O NOVO NOH
    *head_ref = newNode;
}

char* desempilha(node **head_ref)
{
    // VERIFICA SE A PILHA JA ESTA VAZIA
    if (*head_ref == NULL)
    {
        printf("\nA pilha ja esta vazia\n");
        return NULL;
    }

    // ARMAZENA O PROXIMO DEPOIS DO TOPO
    node *tempNode = (*head_ref)->proximo;

    // ARMAZENA O VALOR DO TOPO

    char * tempInt;
    strcpy(tempInt, (*head_ref)->info);

    // LIBERA O TOPO DA PILHA
    free(*head_ref);

    // ATUALIZA A REFERENCIA DA PILHA PARA A DO NOVO TOPO
    *head_ref = tempNode;

    // RETORNA O VALOR DO TOPO
    return tempInt;
}

int tamanho(node **head_ref)
{
    int tamanho = 0;

    node *current = *head_ref;

    while (current != NULL)
    {
        current = current->proximo;
        tamanho++;
    }
    printf("\nTamanho da pilha: %d\n", tamanho);
    return tamanho;
}

char* topo(node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("\nTopo Vazio.\n");
        return NULL;
    }

    else
    {
        printf("\nValor no topo: %s\n", (*head_ref)->info);
        char * tempChar = (*head_ref)->info;
        return tempChar;
    }
}

void imprimirPilha(node **head_ref)
{
    node *current = *head_ref;

    if (current == NULL)
    {
        printf("\nA pilha estah vazia\n");
    }

    else
    {
        printf("\nA pilha estah assim:\n");
    }

    while (current != NULL)
    {
        printf("valor: %s\n", current->info);
        current = current->proximo;
    }
}

void UITerminal(node **head_ref)
{
    int option = -1;
    char value[100];

    while (option != 0)
    {
        printf("\nDigite 1 para empilhar ");
        printf("\nDigite 2 para desempilhar ");
        printf("\nDigite 3 para mostrar o valor no topo ");
        printf("\nDigite 4 para mostrar todos os valores ");
        printf("\nDigite 5 para mostrar o tamanho ");
        printf("\nDigite 6 para mostrar se esta vazia ");
        printf("\nDigite 7 para esvaziar a pilha");
        printf("\nDigite 0 para parar a execusao\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nDigite o valor a ser empilhado: ");
            scanf("%s", value);
            empilha(head_ref, value);
            break;

        case 2:
            printf("\nvalor retornado: %s", desempilha(head_ref));
            break;

        case 3:
            topo(head_ref);
            break;

        case 4:
            imprimirPilha(head_ref);
            break;

        case 5:
            tamanho(head_ref);
            break;

        case 6:
            vazia(head_ref);
            break;

        case 7:
            fPVazia(head_ref);
            break;

        case 0:
            break;

        default:
            printf("\nComando invalido.");
            break;
        }
    }
}
