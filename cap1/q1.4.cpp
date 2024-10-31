#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct {
    char valor[10];
} Str;

int main() {
    Str x = {"um"};
    Str y = {"dois"};

    puts (x.valor);
    x = y;
    puts (x.valor);

    return 0;
}
//X vai receber o valor de y, por isso que na última ocasião ele fica tendo o valor "dois".