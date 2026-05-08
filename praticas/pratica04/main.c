#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

void imprimir_vetor(int v[], int n){
    printf("[");
    for(int i = 0; i<n-1; i++){
        printf("%i, ", v[i]);
    }
    printf("%i]\n", v[n-1]);
}

int main(){
    struct timespec inicio, fim;
    long int nanosec;
    int sec;
    double tempo;

    int v[100];

for(int i = 0; i<100; i++){
v[i] = rand()%999;
    }

imprimir_vetor(v, 100);

clock_gettime(CLOCK_MONOTONIC, &inicio);
bubble_sort(v, 100);
clock_gettime(CLOCK_MONOTONIC, &fim);

    if (nanosec < 0) {
sec -= 1;
nanosec += 1000000000L;
}

sec = fim.tv_sec - inicio.tv_sec;
nanosec = fim.tv_nsec - inicio.tv_nsec;
tempo = sec + nanosec * 1e-9;

imprimir_vetor(v, 100);
printf("Tempo gasto: %.9fs\n", tempo);
    for(int i = 0; i<100; i++){
        v[i] = rand()%999;
    }

clock_gettime(CLOCK_MONOTONIC, &inicio);
quick_sort(v, 0, 99);
clock_gettime(CLOCK_MONOTONIC, &fim);
sec= fim.tv_sec - inicio.tv_sec;
nanosec = fim.tv_nsec - inicio.tv_nsec;

    if (nanosec < 0) {
sec-= 1;
nanosec += 1000000000L;
    }

tempo = sec + nanosec * 1e-9;

imprimir_vetor(v, 100);
printf("tempo gasto: %.9fs\n", tempo);

for(int i = 0; i<100; i++){
v[i] = rand()%999;
    }

clock_gettime(CLOCK_MONOTONIC, &inicio);
selection_sort(v, 100);
clock_gettime(CLOCK_MONOTONIC, &fim);
sec = fim.tv_sec - inicio.tv_sec;
nanosec = fim.tv_nsec - inicio.tv_nsec;
    
if (nanosec < 0) {
sec -= 1;
nanosec += 1000000000L;
}

tempo = sec + nanosec * 1e-9;
imprimir_vetor(v, 100);
printf("Tempo gasto: %.9fs\n", tempo);
    return 0;
}