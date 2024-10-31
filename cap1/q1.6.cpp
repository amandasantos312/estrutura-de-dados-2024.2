#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//a) dinâmica sequencial
int main(void) {
    int i;
    int *v = (int*)malloc(4*sizeof(int));

    for(int i = 0; i < 4; i++) {
        v[i] = i+1;
    }

    for (int i = 0; i < 4; i++) {
        printf("%d\n", v[i]);
    }
}

//b) estática encadeada
typedef struct no {
    int item;
    struct no *prox;
} No;

int main() {
    No v[4] = {{3, v+2}, {1, v+3}, {4, NULL}, {2, v + 0}};

    for (No *p = v+1; p != NULL; p = p->prox) {
        printf("%d\n", p->item);
    }

    return 0;
}

//c) dinâmica encadeada
typedef struct no {
    int item;
    struct no *prox;
} *Lst;

Lst no(int x, Lst p) {
    Lst n = (Lst)malloc(sizeof(struct no));

    n -> item = x;
    n -> prox = p;
    return n;
}

int main(void) {
    Lst p = no(1, no(2, no(3, no(4, NULL))));

    while (p) {
        printf("%d\n", p-> item);
        p = p -> prox; 
    }

    return 0;
}