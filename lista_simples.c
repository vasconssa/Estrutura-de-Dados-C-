#include <lista_simples.h>

bool alocar_noh(noh *no, gpointer dados) {
    noh *tmp = (noh*)malloc(sizeof(noh));
    if(tmp == NULL)
        return false;
    *no = tmp;
    (*no)->elem = dados;
    (*no)->prox = NULL;
}

bool inic_lista(lista *L) {
    lista tmp = (noh*)malloc(sizeof(noh));
    if(tmp == NULL)
        return false;
    else {
        *L = tmp;
        return true;
    }
}

bool inserir_no_fim(lista *L, gpointer valor) {
    noh *tmp;
    lista q = *L;
    if(alocar_noh(&tmp, valor) == false)
        return false;
    while(q->prox != NULL)
        q = q->prox;
    q->prox = tmp;
    return true;
}

bool inserir_no_comeco(lista *L, gpointer valor) {
    noh *tmp;
    if(alocar_noh(&tmp, valor) == false)
       return false;
    tmp->prox = (*L)->prox;
    (*L)->prox = tmp;
    return true;
}

bool inserir(lista *L, posicao p, gpointer valor) {
    noh *tmp, *q;
    if(!alocar_noh(&tmp, valor))
        return false;
    q = p->prox;
    p->prox = tmp;
    tmp->prox = q;
    return true;
}

bool inserir_ordenado(lista *L, gpointer valor, cmp_func cmp) {
        posicao p=*L;
        while(p != NULL && cmp(p->prox->elem, valor)<0)
            p = p->prox;
        inserir(L, p, valor);
        return true;
}



