/* Crie a função iterativa ultimo(L), que devolve o último item da lista L. 
Por exemplo, para L apontando a lista [a, b, c], a função deve devolver o item c. */

#include <iostream>
using namespace std;
#include "q9.3-funcao.h"

int main() {
    char L[] = {'a', 'b', 'c'};

    int tamanho = sizeof(L) / sizeof(L[0]);

    char resultado = ultimo(L, tamanho);

    if (resultado != '\0') {
        cout << "O ultimo elemento eh: " << resultado << endl;
    }
    return 0;
}