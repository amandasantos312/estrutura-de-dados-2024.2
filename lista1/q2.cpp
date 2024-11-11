/*Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão 
imprima “São Diferentes”. 
Faça usando: 
char nome1[20];  
char nome2[20]; 
UTILIZE O COMANDO DE REPETIÇÃO “FOR” PARA PERCORRER AS 
STRINGS CARACTERE A CARACTERE E FAZER A COMPARAÇÃO ENTRE 
ELAS.*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    char nome1[20];
    char nome2[20];
    bool saoIguais = true;

    cout<<"Nome1: ";
    cin>>nome1;
    
    cout<<"Nome2: ";
    cin>>nome2;

    for (int i = 0; i < 20; i++) {
        if (nome1[i] != nome2[i]) {
            saoIguais = false;
            break;
        }

        if (nome1[i] == '\0') {
            break;
        }
    }

    if (saoIguais) {
        cout<<"\nSao Iguais!";
    } else {
        cout<<"\nSao Diferentes!";
    } 
}

