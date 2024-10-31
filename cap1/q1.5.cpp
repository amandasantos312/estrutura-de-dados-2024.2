#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    *p = *p + *q; // 3 + 5 = 8
    *q = *p - *q; // 8 - 5 = 3
    *p = *p - *q; // 8 - 5 = 3

    printf("%d, %d\n", a, b); //5, 3
    return 0;
}