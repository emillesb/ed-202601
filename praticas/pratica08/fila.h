#ifndef FILA_H
#define FILA_H

typedef struct fila_t Fila;


Fila *fila_criar();
void fila_destruir(Fila *fila);
void fila_enfileirar(Fila *fila, int valor);
void fila_desenfileirar(Fila *fila);
int fila_inicio(Fila *fila);
void fila_exibir(Fila *fila);
int fila_vazia(Fila *fila);

#endif