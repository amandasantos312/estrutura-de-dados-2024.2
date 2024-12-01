/* Crie uma função iterativa ocorrencias(x, L), 
que informa quantas vezes o item x ocorre na lista L.
Por exemplo, para L apontando a lista [1, 2, 1, 4, 1], 
a chamada ocorrencias(1, L) deve devolver 3 como resposta. */

#include <stdio.h>
#include "q9.2-funcao.h"

int main() {
    int L[] = {1, 2, 1, 4, 1};

    int tamanho = sizeof(L) / sizeof(L[0]); // Calcula o tamanho do array

    printf("%d\n", ocorrencias(1, L, tamanho));
    
    return 0;
}