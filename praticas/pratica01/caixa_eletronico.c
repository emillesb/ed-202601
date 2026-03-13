#include<stdio.h>

void caixa_eletronica(int v){
    if( v < 0 || v > 1000){
        printf("Saque invalido");
        return;
    }
    int n = 0;
    int tipo_n [] = {200, 100, 50, 20, 10, 5, 2};
    int resto;
        resto = v;
        printf("Quantidade de cade tipo de notas:\n");
        for(int i = 0; i < 6; i ++){
            n = resto/tipo_n[i];
            printf("%i de: %i\n", n, tipo_n[i]);
            resto = resto % tipo_n[i];
        }
        if (resto =! 1){
            printf("Nao foi possivel sacar:%i", resto); 
    } return 0;
}

int main(){
    printf("valor = 1300\n");
    caixa_eletronica(1300);
    printf("valor = 370\n");
    caixa_eletronica(370);
    printf("valor = 500\n");
    caixa_eletronica(500);

}