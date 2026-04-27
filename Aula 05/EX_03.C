#include <stdio.h>

int main() {
    int vetor[8];
    int soma = 0;

    for(int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 8; i++) {
        soma += vetor[i];
    }

    printf("\nSoma dos elementos: %d\n", soma);
}