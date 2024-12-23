#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int itens[MAX];
    int frente, tras;
} Fila;

void inicializarFila(Fila *f) {
    f->frente = 0;
    f->tras = -1;
}

int estaVazia(Fila *f) {
    return f->frente > f->tras;
}

int estaCheia(Fila *f) {
    return f->tras == MAX - 1;
}

void enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) {
        printf("Fila cheia\n");
    } else {
        f->itens[++f->tras] = valor;
    }
}

int desenfileirar(Fila *f) {
    if (estaVazia(f)) {
        printf("Fila vazia\n");
        return -1;
    } else {
        return f->itens[f->frente++];
    }
}

int f1(Fila *f) {
    if (estaVazia(f)) {
        printf("Fila vazia\n");
        return -1;
    } else {
        return f->itens[f->frente];
    }
}

int main() {
    Fila fila;
    inicializarFila(&fila);
    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    printf("Frente da fila: %d\n", f1(&fila)); //10
    desenfileirar(&fila); //sai o 10
    enfileirar(&fila, 30);
    printf("Frente da fila: %d\n", f1(&fila)); //20
    enfileirar(&fila, 40);
    desenfileirar(&fila); //sai o 20
    printf("Frente da fila: %d\n", f1(&fila)); //30
}