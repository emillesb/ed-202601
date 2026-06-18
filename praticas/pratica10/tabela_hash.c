#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct hash_t {
    No **tabela;
    int tamanho;
};

TabelaHash *hash_criar(int tamanho) {
    TabelaHash *h = malloc(sizeof(TabelaHash));
    h->tamanho = tamanho;
    h->tabela = calloc(tamanho, sizeof(No *));
    return h;
}

void hash_inserir(TabelaHash *h, int valor) {
    int idx = valor % h->tamanho;
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = h->tabela[idx];
    h->tabela[idx] = novo;
}

int hash_buscar(TabelaHash *h, int valor) {
    int idx = valor % h->tamanho;
    No *atual = h->tabela[idx];
    while (atual != NULL) {
        if (atual->valor == valor) return 1;
        atual = atual->proximo;
    }
    return 0;
}

void hash_remover(TabelaHash *h, int valor) {
    int idx = valor % h->tamanho;
    No *atual = h->tabela[idx];
    No *anterior = NULL;
    while (atual != NULL) {
        if (atual->valor == valor) {
            if (anterior == NULL)
                h->tabela[idx] = atual->proximo;
            else
                anterior->proximo = atual->proximo;
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

void hash_exibir(TabelaHash *h) {
    for (int i = 0; i < h->tamanho; i++) {
        printf("[%d]: ", i);
        No *atual = h->tabela[i];
        while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
        }
        printf("\n");
    }
}

int hash_esta_vazia(TabelaHash *h) {
    for (int i = 0; i < h->tamanho; i++)
        if (h->tabela[i] != NULL) return 0;
    return 1;
}

void hash_destruir(TabelaHash *h) {
    for (int i = 0; i < h->tamanho; i++) {
        No *atual = h->tabela[i];
        while (atual != NULL) {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
        }
    }
    free(h->tabela);
    free(h);
}