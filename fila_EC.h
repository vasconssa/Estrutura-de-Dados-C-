#include <stdio.h>
#include <stdlib.h>

#ifndef _fila_ec_h
#define _fila_ec_h

#define max  100

typedef int tipoelemento;
typedef tipoelemento vetor[100];
typedef struct fila fila;
struct fila {
    vetor Elementos;
    int fr, tr;
};

int Prox(int i);
void Entrar(tipoelemento x, fila *F);
void Deletar(fila *F);
tipoelemento Frente(fila F);
void InicFila(fila *F);
void Esvaziar(fila *F);
char Vazia(fila F);
#endif
