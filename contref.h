#ifndef _CONTREF_H_
#define _CONTREF_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int status;
    void* endereco;
    struct lista* prox;

}Lista;

void insert(Lista** heap, Lista* L);

Lista* coleta(Lista* L);

void* malloc2(int tam);

void arranjo(void* e1, void* e2);

void atrib2(void* e1, void* e2);

void dump();


#endif // _CONTREF_H_


