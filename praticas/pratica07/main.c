#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha *p = pilha_cria();

    pilha_empilha(p, 10);
    pilha_empilha(p, 20);
    pilha_empilha(p, 30);

    pilha_mostra(p);
    printf("topo: %d\n", pilha_topo(p));

    pilha_desempilha(p);
    pilha_mostra(p);

    pilha_destruir(p);
    return 0;
}