#include "fila_EC.h"

int Prox(int i) {
    return (i + 1) % max;
}

void InicFila(fila *F)
{
    F->fr = 0;
    F->tr = max - 1;
}

void Entrar(tipoelemento x, fila *F) {
    if(Prox(Prox(F->tr)) == F->fr) {
        printf("Fila cheia\n");
    } else {
        F->tr = Prox(F->tr);
        F->Elementos[F->tr] = x;
    }
}

void Deletar(fila *F) {
    if(Prox(F->tr) == F->fr) {
        printf("Fila Vazia\n");
    } else {
        F->fr = Prox(F->fr);
    }
}

tipoelemento Frente(fila F) {
    if(Prox(F.tr) == F.fr) {
        printf ("Fila vazia");
        return -1;
    } else {
        return F.Elementos[F.fr];
    }
}

char Vazia (fila F) {
    if(Prox(F.tr) == F.fr) {
        return 1;
    } else {
        return 0;
    }
}

void Esvaziar(fila *F) {
    InicFila(F);
} 
