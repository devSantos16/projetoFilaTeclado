#include <stdio.h>
#include <stdlib.h>
#include "Tecla.h"


int main()
{
    FilaTeclas *header;
    header = criar('a');
    enfileirar(header, 'b');
    enfileirar(header, 'c');
    enfileirar(header, 'd');
    enfileirar(header, 'e');

    imprimir(header);

    esvaziar(header);

    imprimir(header);

    enfileirar(header, 'a');
    enfileirar(header, 'b');
    enfileirar(header, 'c');
    enfileirar(header, 'd');

    imprimir(header);

    printf("\nDesinfilerei o: %c\n",desenfileira(header));

    imprimir(header);

    printf("\nPrimeiro: %c\n",primeiro(header));
}
