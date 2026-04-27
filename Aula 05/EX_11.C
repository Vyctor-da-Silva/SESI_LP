#include <stdio.h>

int main() {
    int numeros[10];
    int aux;
    int i, j;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (numeros[j] < numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    printf("\nVetor em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}