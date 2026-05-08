#ifndef SELECAO_H
#define SELECAO_H

int linear_search(int v[], int n, int valor);
int particiona(int v[], int inicio, int fim);
void troca(int *a, int *b);
int quick_select(int v[], int inicio, int fim, int k);

#endif