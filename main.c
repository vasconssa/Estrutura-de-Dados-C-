#include <stdio.h>
#include <stdlib.h>
#include "pilha_EE.h"

int main()
{
    pilha P;
    InicPilha(&P);

    Empilhar(10, &P);
    Empilhar(20, &P);
    Empilhar(30, &P);

    printf("%d popped from stack\n", Topo(P));
    Desempilhar(&P);
    printf("%d popped from stack\n", Topo(P));
    Desempilhar(&P);
    printf("%d popped from stack\n", Topo(P));
    Desempilhar(&P);
    printf("%d popped from stack\n", Topo(P));
    return 0;
}
