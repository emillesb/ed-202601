#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

typedef struct no_t{

    int valor;
    struct no_t *proximo;
}No;

typedef struct fila_t{
    No *inicio;
    No *fim;
}Fila;

Fila *fila_criar(){
    Fila *fila = (Fila*) malloc(sizeof(Fila));

    if (fila == NULL){
        return NULL;
    }
    fila->inicio = NULL;
    fila->fim = NULL;
}

int fila_vazia(Fila *fila){

    return (fila->inicio == NULL) && (fila != NULL);
}

void fila_enfileirar(Fila *fila, int valor){
    No *no = (No*) malloc(sizeof(No));

    no->valor = valor;
    no->proximo = NULL;

    if(fila_vazia(fila)){
        fila->inicio = no;
        fila->fim = no;
    } else{
        fila->fim->proximo = no;
        fila->fim = no;
    }
}

void fila_desenfileirar(Fila *fila){
    if(fila_vazia(fila))
        return;
    
    No *primeiro = fila->inicio;
    if(primeiro->proximo != NULL){
        fila->inicio = primeiro->proximo;
    }else{
        fila->inicio = NULL;
        fila->fim = NULL;
    }

    free(primeiro);
    return;
}

int fila_inicio(Fila *fila){
    if(fila_vazia(fila)){
        return -1;
    }
    return fila->inicio->valor;
}

void fila_exibir(Fila *fila){
    No *aux = fila->inicio;

    while(aux != NULL){
    printf("%d ", aux->valor);
    aux = aux->proximo;
    }
    printf("\n");
}

void fila_destruir(Fila *fila){
    free(fila);
}