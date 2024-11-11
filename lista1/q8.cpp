#include <stdio.h> 
 
int x(char *str) { 
    int y = 0; 
    while (*str) { 
        y++; 
        str++; 
    } 
    return y; 
} 
 
int main() { 
    char str[] = "Hello World"; 
    int w = x(str); 
    printf("%d\n", w); 
    return 0; 
}
/*8.1. O que será impresso ao final do programa? 
11 que é a qtd de caracteres da palavra Hello World.

8.2. O que a função X está fazendo? 
Ela percorre caracter por caracter contando até o final da string.
*/