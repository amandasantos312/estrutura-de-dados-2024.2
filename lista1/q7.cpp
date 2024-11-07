#include <stdio.h> 
 
void x(char *str1, char *str2) { 
    while (*str1) { 
        str1++; 
    } 
    
    while (*str2) { 
        *str1 = *str2; 
        str1++; 
        str2++; 
    } 
    *str1 = '\0'; 
} 
 
int main() { 
    char str1[100] = "Hello "; 
    char str2[] = "World!";
    printf("Antes: %s\n", str1);
    x(str1, str2); 
    printf("Depois: %s", str1); 
    return 0;
}
/*7.1. O que será impresso ao final do programa?  
Hello World
7.2. O que a função X está fazendo? 
Ela concatena duas strings, junta a str2 ao final da str1*/