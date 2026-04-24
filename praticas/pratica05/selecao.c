#include "selecao.h"

int linear_search(int v[], int n, int valor){
for(int i = 0; i < n; i++){
if(v[i] == valor){
return i;
}
}
return -1;
}

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int particiona (int v[], int inicio, int fim){
    int pivo = v[fim];
    int i = inicio - 1;
    for(int j = inicio; j<fim; j++){
    if(v[j]<= pivo){
    i++;
    troca(&v[i], &v[j]);
        }
    }
    troca(&v[i+1],&v[fim]);
    return i + 1;
}
int quick_select(int v[], int inicio, int fim, int k){
    
if (inicio <= fim) {
int pivo_idx = particiona(v, inicio, fim);
if (pivo_idx == k) {
return v[pivo_idx];
        } 

if (k < pivo_idx) {
return quick_select(v, inicio, pivo_idx - 1, k);
       
} return quick_select(v, pivo_idx + 1, fim, k);
}
return -1;
}