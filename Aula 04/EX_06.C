#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10];
    int impares[10];
    int qtdPares = 0;
    int qtdImpares = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares[qtdPares] = numeros[i];
            qtdPares = qtdPares + 1;
        } else {
            impares[qtdImpares] = numeros[i];
            qtdImpares = qtdImpares + 1;
        }
    }

    printf("\nNumeros Pares (%d):\n", qtdPares);
    for (i = 0; i < qtdPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nNumeros Impares (%d):\n", qtdImpares);
    for (i = 0; i < qtdImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

}