#include "arvore_EC_comum.h"

noh FilhoEsquerdo(noh n, arvore A)
{
    if(n <= 0 || n > A.ncel) {
        return absurdo;
    }
    if(A.Espaco[n].grau == 0) {
        return nulo;
    } else {
        return n + 1;
    }
}

informacao Elemento(noh n, arvore A)
{
    if(n <= 0 || n > A.ncel) {
        return absurdo;
    }
    return A.Espaco[n].info;
}

noh Raiz(arvore A)
{
    if(A.ncel == 0) {
        return nulo;
    }
    return 1;
}
bool ArvVazia(arvore A)
{
    if(A.ncel  == 0) {
        return true;
    } else {
        return false;
    }
}
void Esvaziar(arvore *A)
{
    A->ncel = 0;
}

noh Pai(noh n, arvore A)
{
    noh n1;
    int nossoltos;
    if(n <= 0 || n > A.ncel) {
        return absurdo;
    }
    if(n == 1) {
        return nulo;
    }
    nossoltos = 1;
    n1 = n - 1;
    while(1) {
        if(A.Espaco[n1].grau >= nossoltos) {
            return n1;
        } else {
            nossoltos += 1 - A.Espaco[n1].grau;
            n1--;
        }
    }
}

bool Cacula(noh n, arvore A)
{
    noh n1;
    int nossoltos;
    if(n <= 0 || n > A.ncel) {
        return absurdo;
    }
    if(n == 1) {
        return nulo;
    }
    nossoltos = 1;
    n1 = n - 1;
    while(1) {
        if(A.Espaco[n1].grau > nossoltos) {
            return false;
        } else if(A.Espaco[n1].grau == nossoltos) {
            return true;
        } else {
            nossoltos += 1 - A.Espaco[n1].grau;
            n1--;
        }
    }

}

noh IrmaoDireito(noh n, arvore A)
{
    noh n1;
    int descendentes;
    if(n <= 0 || n > A.ncel) {
        return absurdo;
    }
    if(Cacula(n, A) == true) {
        return nulo;
    }
    descendentes = A.Espaco[n].grau;
    n1 = n + 1;
    while(1) {
        if(n1 - n > descendentes) {
            return n1;
        } else {
            descendentes += A.Espaco[n1].grau;
            n1++;
        }
    }
}
