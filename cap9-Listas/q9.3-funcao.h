#include <iostream>
using namespace std;

char ultimo(const char L[], int tamanho) {
    if (tamanho > 0) {
        return L[tamanho - 1]; // Retorna o último elemento
    } else {
        cout << "Erro: Lista vazia!" << endl;
        return '\0'; // Retorna um caractere nulo em caso de lista vazia
    }
}