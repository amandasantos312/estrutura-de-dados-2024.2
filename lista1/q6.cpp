#include <stdio.h> 
#include <iostream> 
using namespace std; 
 
typedef struct no { 
    int item; 
    struct no *prox; 
} *Lst;

Lst no(int x, Lst p) { 
    Lst n = (struct no*)malloc(sizeof(struct no)); 
    n->item = x; 
    n->prox = p; 
    return n; 
}

int main(){ 
    /*Lst p = (no(1,no(2,no(3,no(4,NULL))))); 

    while (p){ 
        cout<< p->item <<endl; 
        p = p->prox;
    }*/

   Lst lista = NULL;
   int n;

   cout<<"Digite a qtd de elementos: ";
   cin>>n;

   for (int i = 0; i < n; i++) {
       int valor;
       cout<<"Valor "<<i+1<<": ";
       cin>>valor;

       lista = no(valor, lista);
   }

   Lst p = lista;
   while (p) {
       cout<<p->item<<endl;
       p = p->prox;
   }
}
/* 6.1 o que será impresso ao final da execucao do programa?
1 2 3 4

6.2 Inclua os valores no vetor agora através da leitura do teclado. 
 OBS: Leia o valor de item através do teclado e inclua na lista de 
maneira que o ponteiro prox deve apontar sempre para o proximo elemento da 
lista. */