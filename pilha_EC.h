#include <stdio.h>
#include <stdlib.h>

#ifndef _pilha_ec_h
#define _pilha_ec_h

#define MAX  100
typedef int vetor[101];
typedef struct pilha pilha;
struct pilha {
    vetor Elementos;
    int Topo;
};

void Empilhar(int x, pilha *P);
void Desempilhar(pilha *P);
int Topo(pilha P);
void InicPilha(pilha *P);
char Vazia(pilha P);
void Esvaziar(pilha *P);

#endif
