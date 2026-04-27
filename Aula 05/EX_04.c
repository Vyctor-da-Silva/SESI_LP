#include <stdio.h>

int main() {
    int vetor[6];
    int maior;

    for(int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(int i = 1; i < 6; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);
}
