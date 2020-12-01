#include <stdbool.h>
#define MaxSize 5
typedef struct {
 char Teclas[MaxSize];
 int Inicio, Fim;
 bool chegouNoMax;

} FilaTeclas;

FilaTeclas* criar(char tecla);
void enfileirar(FilaTeclas *header, char tecla);
void esvaziar(FilaTeclas *header);
int vazia(FilaTeclas *header);
int cheia(FilaTeclas *header);
void imprimir(FilaTeclas *header);
char desenfileira(FilaTeclas *header);
