#include "pilha_EE.h"

void Empilhar(int x, pilha *P)
{
    noh *temp;
    temp = *P;
    *P = (noh *)malloc(sizeof(noh));
    (*P)->elem = x;
    (*P)->prox = temp;
}

void Desempilhar(pilha *P)
{
    noh *temp;
    if(*P != NULL) {
        temp = *P;
        *P = (*P)->prox;
        free(temp);
    } else {
        printf("Pilha Vazia");
    }
}

int Topo(pilha P) 
{
    if(P != NULL) {
        return P->elem;
    } else {
        return -1;
    }
}

void InicPilha(pilha *P) {
    *P = NULL;
}

char Vazia(pilha P) {
    if(P == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void Esvaziar(pilha *P)
{
    while(!Vazia(*P)){
        Desempilhar(P);
    }
    *P = NULL;
}
