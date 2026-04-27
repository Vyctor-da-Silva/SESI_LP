 #include <stdio.h>

int main() {
    int vetor[5];

    // Leitura dos 5 números
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    // Exibição dos valores
    printf("\nValores armazenados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
}