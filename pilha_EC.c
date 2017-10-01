#include "pilha_EC.h"

void Empilhar(int x, pilha *P)
{
    if(P->Topo <= 0) {
        printf("Pilha cheaia\n");
    } else {
        P->Topo--;
        P->Elementos[P->Topo] = x;
    }
}

int Topo(pilha P)
{
    if(P.Topo > MAX) {
        printf("Pilha vazia");
        return -1;
    } else {
        return P.Elementos[P.Topo];
    }
}

void Desempilhar(pilha *P)
{
    if(P->Topo > MAX) {
        printf("Pilha vazia\n");
    } else {
        P->Topo++;
    }
}

void InicPilha(pilha *P) {
    P->Topo = MAX + 1;
}

void Esvaziar (pilha *P) 
{
    P->Topo = MAX + 1;
}
