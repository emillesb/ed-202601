#include <stdio.h>
#include "max_heap.h"

void imprimir(MaxHeap *raiz){
    int indice = 0;

    while(indice<raiz->tamanho){

        printf("%i", raiz->dados[indice]);
        indice++;

    }  
    printf("/n");
}

int main(){
    MaxHeap *heap = criar(100);
    inserir(heap, 20);
    imprimir(heap);

    inserir(heap, 18);
    imprimir(heap);

    inserir(heap, 25);
    imprimir(heap);

    inserir(heap, 3);
    imprimir(heap);

    inserir(heap, 40);
    imprimir(heap);

    inserir(heap, 60);
    imprimir(heap);

    inserir(heap, 80);
    imprimir(heap);


}