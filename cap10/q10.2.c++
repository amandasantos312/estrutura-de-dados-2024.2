#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

// Função para criar um nó na lista
Lista criarNo(Item valor) {  //Paulo
    Lista novo = (Lista)malloc(sizeof(struct no));
    if (novo == NULL) {
        printf("Erro de memória\n");
        exit(1);
    }
    novo->item = valor;
    novo->prox = NULL;
    return novo;
}

// Função para inserir um valor na lista
void inserirNaLista(Lista *l, Item valor) {  //Paulo
    Lista novo = criarNo(valor);
    novo->prox = *l;
    *l = novo;
}

// Função para ordenar a lista em ordem decrescente
void ordenarLista(Lista *l) {  //Henrique
    if (*l == NULL || (*l)->prox == NULL)
        return;

    Lista i, j;
    for (i = *l; i != NULL; i = i->prox) {
        for (j = i->prox; j != NULL; j = j->prox) {
            if (i->item < j->item) {
                // Troca os valores dos nós
                Item temp = i->item;
                i->item = j->item;
                j->item = temp;
            }
        }
    }
}

// Função para exibir a lista
void exibirLista(Lista l) { //Henrique
    while (l != NULL) {
        printf("%d ", l->item);
        l = l->prox;
    }
    printf("\n");
}

// Função principal
int main() {  //Amanda
    Lista lista = NULL;
    int n, valor;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    printf("Digite os elementos da lista: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        inserirNaLista(&lista, valor);
    }

    printf("Lista antes da ordenacao: ");
    exibirLista(lista);

    ordenarLista(&lista);

    printf("Lista em ordem decrescente: ");
    exibirLista(lista);

    return 0;
}
