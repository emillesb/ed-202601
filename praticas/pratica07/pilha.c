#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct pilha_t {
    No *topo;
};

Pilha *pilha_cria(void) {
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void pilha_empilha(Pilha *p, int valor) {
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = p->topo;
    p->topo = novo;
}

int pilha_desempilha(Pilha *p) {
    No *removido = p->topo;
    int valor = removido->valor;
    p->topo = removido->proximo;
    free(removido);
    return valor;
}

int pilha_topo(Pilha *p) {
    return p->topo->valor;
}

int pilha_vazia(Pilha *p) {
    return p->topo == NULL;
}

void pilha_mostra(Pilha *p) {
    No *atual = p->topo;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

void pilha_destruir(Pilha *p) {
    while (!pilha_vazia(p))
        pilha_desempilha(p);
    free(p);
}