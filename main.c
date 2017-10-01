#include <stdio.h>
#include <stdlib.h>
#include "fila_EE.h"

int main()
{
    fila P;
    InicFila(&P);

    Entrar(10, &P);
    Entrar(20, &P);
    Entrar(30, &P);

    printf("%d popped from stack\n", Frente(P));
    Deletar(&P);
    printf("%d popped from stack\n", Frente(P));
    Deletar(&P);
    printf("%d popped from stack\n", Frente(P));
    Deletar(&P);
    printf("%d popped from stack\n", Frente(P));
    return 0;
}
