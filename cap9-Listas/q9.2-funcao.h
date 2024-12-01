int ocorrencias(int x, int L[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) { 
        if (L[i] == x) { 
            contador++;
        }
    }
    return contador;
}

/*int ocorrencias(int x, int* L, int tamanho) {
    int contador = 0;
    for (int* ptr = L; ptr < L + tamanho; ptr++) { // Avança o ponteiro
        if (*ptr == x) { 
            contador++;
        }
    }
    return contador;
}*/