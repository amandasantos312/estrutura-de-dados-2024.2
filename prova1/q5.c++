#include <stdio.h>
#include <iostream>
using namespace std;

main() {
    int v[3] = {9, 6, 7};
    int *p = v;

    //resposta:
    cout<<*(p+2);
}