#include <stdio.h>
#include "arvore_binaria.h"

int main(){
    Arvore *arvore = arvore_criar();
    
    printf("%d\n", arvore_esta_vazia(arvore));
    
    arvore_inserir(arvore, 1);
    arvore_inserir(arvore, 5);
    arvore_inserir(arvore, 9);
    arvore_inserir(arvore, 3);
    arvore_inserir(arvore, 21);
    arvore_inserir(arvore, 27);
    arvore_inserir(arvore, 30);
    arvore_inserir(arvore, 17);
    arvore_inserir(arvore, 7);
    arvore_inserir(arvore, 55);

    
    printf("%d\n", arvore_esta_vazia(arvore));

    arvore_exibir_em_ordem(arvore);
    printf("\n");
    arvore_exibir_pre_ordem(arvore);
    printf("\n");

    arvore_destruir(arvore);

    return 0;
}