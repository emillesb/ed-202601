#include <stdlib.h>
#include "max_heap.h"

MaxHeap *criar (int capacidade){
    MaxHeap *heap = (MaxHeap *)malloc(sizeof(MaxHeap));

    if (heap ==NULL){
        return NULL;
    }

    heap->dados = (int *)malloc(sizeof(int)*capacidade);
    heap->capacidade = capacidade;
    heap ->tamanho = 0;
    return heap;
}

void destruir(MaxHeap *raiz){
    free(raiz->dados);
    free(raiz);
}

//algoritmo de flutuacao
void up_heap(MaxHeap *raiz, int indice){
    int indice_pai = (indice - 1) / 2;
}
    while(indice > 0 && raiz->dados[indice] > raiz->dados[indice_pai])
    {
        //troca filho com pai
        int temp = raiz->dados[indice];
        raiz->dados[indice] = raiz->dados[indice_pai];
        raiz->dados[indice_pai] = temp;

        // sobe um indice da heap
        indice=indice_pai;
        indice_pai = (indice - 1) / 2;
    }

void inserir(MaxHeap *raiz, int valor){
    if(raiz->tamanho >= raiz->capacidade) {
        return;
    }
raiz ->dados[raiz->tamanho] = valor;
raiz->tamanho++;
};