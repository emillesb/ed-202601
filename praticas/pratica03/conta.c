#include <stdio.h>
#include <stdlib.h>
#include "conta.h"



Conta *conta_criar(){
Conta *conta = (Conta *)malloc(sizeof(Conta));
conta->numero = rand()%1000000;
conta->saldo = 0;
return conta;}

void conta_depositar(Conta *conta, float deposito){
    if(deposito<=0){
    printf("valor invalido.\n");
    return;}

    conta->saldo += deposito;
return;}

void conta_sacar(Conta *conta, float saque){
    if(conta->saldo<saque){
    printf("saldo insuficiente\n");
    return;}
    conta->saldo -= saque;
    return;}

float conta_ver_saldo(Conta *conta){
return conta->saldo;
}

void conta_destruir(Conta *conta){
free(conta);
return;
}