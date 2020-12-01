#include <stdbool.h>
typedef struct tecla{
    char bind;
    struct tecla* proximo;
} Tecla;

Tecla* criar(char caracter);
void imprimir(Tecla* header);
void Enfileirar(Tecla *header, char caracter);
Tecla* Esvazia(Tecla* header);
bool Vazia(Tecla* header);
char Primeiro(Tecla* header);
