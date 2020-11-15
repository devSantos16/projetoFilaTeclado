#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tecla.h"
int main()
{
    printf("Digite o que quiser: ");
    char msg[100];
    Tecla *header;
    scanf("%s", msg);

    // Percorre a messagem
    for(int i = 0; i < strlen(msg); i++){
        // Cria o header, Se for a primeira vez
        if(i == 0){
            header = criar(msg[i]);
        }
        // Se não, Adiciona ao final
        else {
            adicionarAoFinal(header, msg[i]);
        }
    }
    // Imprime
    imprimir(header);
}


