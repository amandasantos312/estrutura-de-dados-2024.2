#include <stdio.h> 
#include <iostream> 
using namespace std; 
 
typedef struct no { 
    int item; 
    struct no *prox; 
} No;
 
int main() {
    No v[4]; //= {{3,v+2},{1,v+3},{4,NULL},{2,v+0}};

    for (int i = 0; i < 4; i++) {
        cout<<"Valor para v["<<i<<"]: ";
        cin>>v[i].item;

        if (i < 3) {
            v[i].prox = &v[i + 1];
        } else {
            v[i].prox = NULL;
        }
    }

    for (No *p = &v[0]; p != NULL; p = p->prox) {
        cout<<p->item;
    }
}

/*5.1 o que será impresso ao final da execucao do programa? 
- 1234

5.2 Inclua os valores no vetor agora através da leitura do teclado.
OBS: Leia o valor do item através do teclado e inclua no vetor de 
maneira que o ponteiro prox deve apontar sempre para o proximo 
elemento do vetor. */