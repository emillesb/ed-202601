#include <stdio.h>
#include "tabela_hash.h"

int main(void) {
TabelaHash *h = hash_criar(5);

    hash_inserir(h, 10);
    hash_inserir(h, 20);
    hash_inserir(h, 33);
    hash_inserir(h, 7);
    hash_inserir(h, 15);

    hash_exibir(h);

printf("busca 33: %d\n", hash_buscar(h, 33));
printf("busca 99: %d\n", hash_buscar(h, 99));

    hash_remover(h, 33);
    hash_exibir(h);

printf("vazia: %d\n", hash_esta_vazia(h));

    hash_destruir(h);
    return 0;
}