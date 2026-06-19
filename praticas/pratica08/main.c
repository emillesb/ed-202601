#include<stdio.h>
#include "fila.h"

int main(){

    Fila *fila = fila_criar();

    fila_enfileirar(fila,1);
    fila_enfileirar(fila,2);
    fila_enfileirar(fila,3);
    fila_enfileirar(fila,4);
    fila_enfileirar(fila,5);
    fila_enfileirar(fila,6);


    fila_exibir(fila);

    printf("\nInicio da fila: %d\n", fila_inicio(fila));

    fila_desenfileirar(fila);

    fila_exibir(fila);

    printf("\nInicio da fila: %d\n", fila_inicio(fila));

    if(fila_vazia(fila)){
        printf("Fila vazia\n");
    }else{
        printf("Fila nao esta vazia\n");
    }

    fila_destruir(fila);



    return 0;
}