#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct no {
    int item;
    struct no *prox;
} *t;

t no (int x, t p) {
    t n = (struct no*)malloc(sizeof(struct no));
    n -> item = x;
    n -> prox = p;
    return n;
}

main() {
    t p = (no(10, no(20, no(30, no(40, NULL)))));
    while (p) {
        cout << p -> item << endl;
        p = p->prox;
    }
}