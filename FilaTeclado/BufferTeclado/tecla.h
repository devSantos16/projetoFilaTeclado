typedef struct tecla{
    char bind;
    struct tecla* proximo;
} Tecla;

Tecla* criar(char caracter);
void imprimir(Tecla* header);
void adicionarAoFinal(Tecla *head, char caracter);
