/*Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão 
imprima “São Diferentes”. 
Faça usando:
char nome1[20];  
char nome2[20]; 
USE A FUNÇÃO STRCMP () PARA COMPARAR AS STRINGS. */

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    char nome1[20];
    char nome2[20];

    cout<<"Nome1: "<<endl;
    cin>>nome1;
    cout<<"Nome2: "<<endl;
    cin>>nome2;

    if (strcmp(nome1, nome2) == 0) {
        cout<<"Sao Iguais!"<<endl;
    } else {
        cout<<"Sao Diferentes!"<<endl;
    }
}