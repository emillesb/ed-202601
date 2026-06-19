#include <stdlib.h>
#include <stdio.h>
#include "arvore_binaria.h"

typedef struct No{
    struct No* direita;
    struct No* esquerda;
    int valor;
}No;

struct arvore_t{
    No* raiz;
};

void pre_ordem(No *no){
        if(no==NULL){
            return;
        }

        //visita o no
        printf("[%i] ", no->valor);
        pre_ordem(no->esquerda);
        pre_ordem(no->direita);
    }

void em_ordem(No *no){
     if(no==NULL){
        return;
    }

    //visita o no
    em_ordem(no->esquerda);
    printf("[%i] ", no->valor);
    em_ordem(no->direita);
    
}


Arvore * arvore_criar(){
    Arvore *arvore = (Arvore*)malloc(sizeof(Arvore));
    if(arvore==NULL){
        return NULL;
    }
    arvore->raiz = NULL;
    return arvore;
}

void arvore_inserir(Arvore *arvore, int valor){
    No *no = (No*)malloc(sizeof(No));
    no->valor = valor;
    no->direita = NULL;
    no->esquerda = NULL;
    
    if(arvore->raiz==NULL){
        arvore->raiz = no;
        return; 
    }

    No *temp = arvore->raiz;
    No *pai = arvore->raiz;
    while(temp!=NULL){
        if(valor<temp->valor){
            temp = temp->esquerda;
            if(temp==NULL){
                pai->esquerda = no;
            }
            pai = pai->esquerda;
        }else{
            temp = temp->direita;
            if(temp==NULL){
                pai->direita = no;
            }
            pai = pai->direita;
        }
    }


}

void arvore_exibir_pre_ordem(Arvore *arvore){
    if(arvore==NULL){
            return;
    }

    pre_ordem(arvore->raiz);
}

void arvore_exibir_em_ordem(Arvore *arvore){
    if(arvore==NULL){
        return;
    }
    em_ordem(arvore->raiz);
}

int arvore_esta_vazia(Arvore *arvore){
 return (arvore!=NULL)&&(arvore->raiz!=NULL);
}

void arvore_destruir(Arvore *arvore){
    free(arvore->raiz);
    free(arvore);
}