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
            Enfileirar(header, msg[i]);
        }
    }

    imprimir(header);

    header=Esvazia(header);

    imprimir(header);

    printf("\nCriando nova lista com a,b,c\n");
    header = criar('a');
    Enfileirar(header, 'b');
    Enfileirar(header, 'c');
    printf("\nValor Primeiro: %c\n",Primeiro(header));
}


