#include <stdio.h>
#define n 5

int main() {
    int a[n], b[n];
    int i, j=n-1;

    for (i = 0; i < n; i++) {
        printf("Valor de a[%d]: ", i);
        scanf("%d", &a[i]);
        b[j] = a[i];
        j--;
    }

    printf("\n");
    printf("Vetor b: ");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}