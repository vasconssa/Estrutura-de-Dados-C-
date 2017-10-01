#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _arvore_ec_comum_h
#define _arvore_ec_comum_h

#define max 100
#define nulo 0
#define absurdo -9999

typedef int noh;
typedef char informacao;
typedef struct celula celula;
struct celula {
    informacao info;
    int grau;
};

typedef struct arvore arvore;
struct arvore {
    celula Espaco[101];
    int ncel;
}

noh FilhoEsquerdo(noh n, arvore A);
informacao Elemento(noh n, arvore A);
noh Raiz(arvore A);
bool ArvVazia(arvore A);
void Esvaziar(arvore *A);
noh Pai(noh n, arvore A);
bool Cacula(noh n, arvore A);
noh IrmaoDireito(noh n, arvore A);

#endif
