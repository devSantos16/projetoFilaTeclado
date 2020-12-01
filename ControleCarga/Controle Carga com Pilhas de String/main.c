#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // LISTA CRIADA VAZIA
    node* head = criar();

    head = NULL;
    
    UITerminal(&head);

    return 0;
}
