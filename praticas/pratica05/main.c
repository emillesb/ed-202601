#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"

void imprimir_vetor(int v[], int n){
printf("[");
for(int i = 0; i<n-1; i++){
printf("%i, ", v[i]);
}
printf("%i]\n", v[n-1]);
}

int main(){
int v[100], pos, num;
for(int i = 0; i<100; i++){
v[i] = (rand()%1000);
    }

num = quick_select(v, 0, 8, 67);
    printf("O numero %i ta na posicao 67.\n", num);
pos = linear_search(v, 43, num);
    printf("O numer %i esta na posicao %i\n", num, pos);
num = quick_select(v, 0, 45, 99);
    printf("na posicao 99 ta o valor: %i\n", num);
pos = linear_search(v, 100, num);
    printf("o valor %i se encontra na posicao %i\n", num, pos);
num = quick_select(v, 0, 45, 49);
    printf("na posicao 49 se encontra o valor %i\n", num);
pos= linear_search(v, 100, num);
    printf("o valor %i ta na posicao %i\n", num, pos);

//pos= linear_search(v, 100000000, num);
//printf("o valor %i ta na posicao %i\n", num, pos);
//pos = linear_search(v, 10000000, num);
//printf("O numero %i esta na posicao %i\n", num, pos);

    imprimir_vetor(v, 100);
    return 0;
}