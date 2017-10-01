#include <stdio.h>
#include <stdlib.h>

#ifndef _fila_ee_h
#define _fila_ee_h

typedef struct noh noh;
struct noh{
    int elem;
    noh *prox;
};

typedef struct fila fila;
struct fila {
    noh *fr;
    noh *tr;
};

void Entrar(int x, fila *F);
void Deletar(fila *F);
int Frente(fila F);
void InicFila(fila *F);
void Esvaziar(fila *F);
char Vazia(fila F);

#endif
