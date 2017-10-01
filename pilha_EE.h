#include <stdio.h>
#include <stdlib.h>

#ifndef _pilha_ee_h
#define _pilha_ee_h

/* Definicao estrutura para pilha
 * nao eh usado noh-lider
 */
typedef struct noh noh;
struct noh {
    int elem;
    noh *prox;
};

typedef noh *pilha;

/* Operadores para o TAD pilha */

void Empilhar(int x, pilha *P);
void Desempilhar(pilha *P);
int Topo(pilha P);
void InicPilha(pilha *P);
char Vazia(pilha P);
void Esvaziar(pilha *P);
#endif
