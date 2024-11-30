#include <iostream>
using namespace std;
#include <stdlib.h>

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no (Item x, Lista p) {
    Lista n = (Lista) malloc(sizeof(struct no));
    n -> item = x;
    n -> prox = p;
    return n;
}

void exibir(Lista L) {
    while(L != NULL) {
        printf("%d", L->item);
        printf("\n");
        L = L->prox;
    }
}

void anexacao(Lista *A, Lista B) {
    if (B == NULL) return;
    while (*A != NULL) A = &(*A) -> prox;
    *A = B;
}

void destroi(Lista *L) {
    while(*L = NULL) {
        Lista n = *L;
        *L = n-> prox;
        free(n);
    }
}

int tamanho(Lista L) {
    if (L == NULL) return 0;
    return 1 + tamanho(L -> prox);
}