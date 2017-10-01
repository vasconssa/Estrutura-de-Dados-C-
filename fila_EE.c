#include "fila_EE.h"


void InicFila(fila *F)
{
    F->tr = (noh*)malloc(sizeof(noh));
    F->fr = F->tr;
    F->fr->prox = NULL;
}
void Entrar(int x, fila *F)
{
    noh *temp = (noh*)malloc(sizeof(noh));
    temp->elem = x;
    temp->prox = NULL;
    F->tr->prox = temp;
    F->tr = temp;
}

void Deletar(fila *F)
{
    noh *temp;
    if(F->fr->prox == F->tr) {
        temp = F->tr;
        F->tr = F->fr;
        free(temp);
    } else {
        temp = F->fr->prox;
        F->fr->prox = temp->prox;
        free(temp);
    }
}

int Frente(fila F)
{
   if(F.fr == F.tr) {
       printf("Fila vazia\n");
       return -1;
   } else {
       return F.fr->prox->elem;
   }
}

char Vazia(fila F)
{
    if(F.fr == F.tr) {
        return 1;
    } else return 0;
}

void Esvaziar(fila *F)
{
    while (!Vazia(*F)) {
        Deletar(F);
    }
    F->fr->prox = NULL;
}
