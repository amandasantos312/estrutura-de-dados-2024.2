#include <iostream>
using namespace std;

#include "cap9-Listas/funcoes-de-exemplos.cpp"

int main() {
    Lista I = no(3, no(1, no(5, NULL)));
    Lista H = no(4, no(2, NULL));

    printf("Lista I:\n");
    exibir(I);

    printf("Lista H:\n");
    exibir(H);

    anexacao(&H, I);
    printf("Lista H depois da anexacao:\n");
    exibir(H);

    printf("Destroi Lista I\n");
    destroi(&I);

    printf("Tamanho da lista H: %d\n", tamanho(H));


    return 0;
}