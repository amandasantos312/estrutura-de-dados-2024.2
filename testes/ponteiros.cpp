#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


main() {
    /*//Exemplo 1:
    int *p;
    int x = 10;
    p = &x;
    x = x + 2;

    printf("Valor: %d\n", *p);
    printf("Endereco: %d\n", p);
    *p = 20;
    printf("Valor: %d\n", x);

    int v[3] = {4, 5, 6};
    int *p1 = v;

    printf("\nValor: %d\n", *(v)); //basta dar o primeiro endereço para poder acessar os valores dos outros;
    printf("Valor: %d\n", *(v+1));
    printf("Valor: %d\n", *(v+2));*/


//Exemplo 2:
typedef struct {
    int mat;
    char nome[30];
    float nota;
} TAluno;

TAluno aluno1; 
    aluno1.mat = 1;
    strcpy(aluno1.nome, "Amanda");
    aluno1.nota = 8.5;

    TAluno *a1; //cria ponteiro para o tipo TAluno
    a1 = &aluno1;
    printf("\n------------");
    printf("\nNome: %s\n", a1->nome);
    printf("Matricula: %d\n", a1->mat);
    printf("Nota: %.1f\n", a1->nota);

    int *p1 = (int*)malloc(sizeof(int));
    *p1 = 20;
    printf("\nValor: %d\n", *p1);

    int n = 3;
    int *w = (int*)malloc(n * sizeof(int));
    w[0] = 10;
    printf("Valor: %d\n", w[0]);


/*//Exemplo3
typedef struct pessoa {
    int id;
    char nome[30];
    pessoa *proximo;
} TPessoa;


TPessoa *f1 = (TPessoa*)malloc(sizeof(TPessoa));

    f1 -> id=1;
    strcpy(f1->nome,"vitoria");
    f1->proximo=NULL;

    cout<<f1->id<<endl; //
    cout<<f1->nome<<endl; //

    TPessoa *f2 = (TPessoa*)malloc(sizeof(TPessoa));

    f2 -> id=2;
    strcpy(f2->nome,"joao");
    f2->proximo=NULL;

    cout<<f2->id<<endl;
    cout<<f2->nome<<endl;

    f1->proximo = f2;

    TPessoa *percorre = f1;

    while(percorre) {
        cout<<"\nID:"<<percorre->id<<endl;
        cout<<"Nome:"<<percorre->nome<<endl;
        percorre = percorre->proximo;
    }*/
}