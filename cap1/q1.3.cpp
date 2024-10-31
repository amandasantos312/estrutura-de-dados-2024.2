#include <stdio.h>
#include <string.h>
/*#include <iostream>
using namespace std;*/

int main(void) {
    char s[3] = "um";
    char t[3] = "um";

    if (s == t) puts ("iguais");
    else puts ("diferentes");

    return 0;
}

//O resultado é "diferentes" porquê ele compara a o endereço das variáveis