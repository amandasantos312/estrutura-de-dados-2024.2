#include <stdio.h>
#include <string.h>
#define MAX 100

//Define a estrutura pilha:
struct Pilha {
    int topo;
    char itens [MAX];
};

//Inicializa a pilha:
void inicializar(struct Pilha *p) {
    p->topo =-1;
}

//Verifica se a pilha está vazia:
int estaVazia(struct Pilha *p) {
    return p-> topo ==-1;
}

//Insere elemento na pilha
void push(struct Pilha *p, char valor) {
    if (p-> topo == MAX -1) {
        printf("Pilha cheia\n");
    } else {
        p->itens[++p->topo] = valor;
    }
}

//Remove e retorna o elemento da pilha
char pop(struct Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia\n");
        return '\0';
    } else {
        return p->itens[p->topo--];
    }
}

void f1(char *str) {
    int n = strlen(str);
    struct Pilha p;
    inicializar(&p);

    for(int i = 0; i < n; i++) {
        push(&p, str[i]);
    }

    for(int i = 0; i < n; i++) {
        str[i] = pop(&p);
    }
}

int main() {
    char str[MAX] = "casa azul!";
    printf("Original: %s\n", str);
    f1(str);
    printf("Resultado: %s\n", str);
    return 0;
}