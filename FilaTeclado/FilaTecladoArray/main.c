#include <stdio.h>
#include <stdlib.h>
#include "Tecla.h"


int main()
{
    FilaTeclas *header;
    header = criar('c');
    enfileirar(header, 'a');
    enfileirar(header, 'a');
    enfileirar(header, 'a');
    enfileirar(header, 'a');
    // Deu
    imprimir(header);


}
