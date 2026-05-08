#include <stdio.h>
#include "conta.h"

int main(){

Conta *conta_teste = conta_criar();

    printf("Este eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));
conta_depositar(conta_teste, 300);
    printf("Este eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));
conta_sacar(conta_teste, -900);
    printf("Este eh seu saldo atual %.2f\n", conta_ver_saldo(conta_teste));
conta_sacar(conta_teste, 80);
    printf("SEste eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));
conta_depositar(conta_teste, -40);
    printf("Este eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));
conta_sacar(conta_teste, 99999);
    printf("Este eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));

conta_destruir(conta_teste);

    printf("Este eh seu saldo atual: %.2f\n", conta_ver_saldo(conta_teste));

    return 0;
}