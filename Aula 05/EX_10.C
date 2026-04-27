#include <stdio.h>

int main() {
    float numeros[10];
    float aux;
    int i, j;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    printf("\nVetor em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");
}