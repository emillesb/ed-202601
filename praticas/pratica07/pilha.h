#ifndef PILHA_H
#define PILHA_H

typedef struct pilha_t Pilha;

Pilha *pilha_cria(void);
void pilha_empilha(Pilha *p, int valor);
int pilha_desempilha(Pilha *p);
int pilha_topo(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_mostra(Pilha *p);
void pilha_destruir(Pilha *p);

#endif