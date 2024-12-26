#include <iostream>
using namespace std;

int main() {
    //e: resultado = 10 e não 4.
    int a = 4;
    int *p = &a;
    *p = 10;
    cout << a << endl;

    //f:
    int b = 5;
    int *p = &b;
    *p = 12;
    cout << b << endl;
}
