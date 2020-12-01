#include <stdbool.h>

typedef struct node {
    char info[100];
    struct node* proximo;
} node;

node* criar();

void fPVazia(node** head_ref);

bool vazia(node** head_ref);

void empilha(node** head_ref, char value[]);

char* desempilha(node** head_ref);

int tamanho(node** head_ref);

char* topo(node** head_ref);

void imprimirPilha(node** head_ref);

void UITerminal(node** head_ref);
