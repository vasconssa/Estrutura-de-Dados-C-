#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _lista_simples_h
#define _lista_simples_h

// Define um ponteiro void para dados genericos
typedef void* gpointer;
// Definicao estrutura lista
typedef struct noh noh;
typedef noh *lista;
struct noh {
    dados elem;
    noh *prox;
};

typedef int (*cmp_func)(gpointer a, gpointer b);

// Posicao de um elemento é um ponteiro que contem
// o antecessor desse elemento
typedef noh *posicao;

// Declaraçao Operadores

bool inic_lista(lista *L);
void inserir_no_fim(lista *L, gpointer valor);
void inserir_no_comeco(lista *L, gpointer valor);
void inserir(lista *L, posicao p, gpointer valor);
void inserir_ordenado(lista *L, gpointer valor, cmp_func func);
gpointer deletar(lista *L, posicao p);
posicao local(lista L, gpointer valor);
void esvaziar (lista *L);
posicao primeira(lista L);
posicao fim(lista L);
posicao proxima(lista L);
gpointer elemento(Lista L, posicao);



#endif
