/*Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão 
imprima “São Diferentes”. 
Faça usando: 
string nome1;  
string nome2;*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    string nome1;
    string nome2;

    cout<<"Nome1: ";
    cin>>nome1;

    cout<<"Nome2: ";
    cin>>nome2;

    if (nome1 == nome2) {
        cout<<"\nSao Iguais!"<<endl;
    } else {
        cout<<"\nSao Diferentes!"<<endl;
    }
} 