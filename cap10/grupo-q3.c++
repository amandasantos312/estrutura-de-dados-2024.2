#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No* prox;
    struct No* prev;
};

struct No* novoNo(int dado){
    struct No* no = (struct No*)malloc(sizeof(struct No));
    no->dado = dado;
    no->prox = NULL;
    no->prev = NULL;
    return no;
}

void inserirNoInicio(struct No** cabeca, int dado){
    struct No* novo = novoNo(dado);

    if(*cabeca == NULL){
        *cabeca = novo;
    } else{
        novo->prox = *cabeca;
        (*cabeca)->prev = novo;
    }

    *cabeca = novo;
}

void exibirLista(struct No* no){
    struct No* aux = no;

    while (aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }

}

void exibirLista_inv(struct No* no){
    struct No* aux = no;
    while (aux->prox != NULL){
        aux = aux->prox;
    }

    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prev;
    }
}

int main(){

    struct No* cabeca = NULL;

    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    printf("Conteudo da lista duplamente encadeada: \n");
    printf("Lista\n");
    exibirLista(cabeca);
    printf("Lista invertida\n");
    exibirLista_inv(cabeca);


    return 0;
}