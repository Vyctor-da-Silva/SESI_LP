#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0, media;
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    printf("\nMédia = %.2f\n", media);
    printf("Valores maiores que a média:\n");

    for (i = 0; i < 10; i++) {
        if (numeros[i] > media) {
            printf("%.2f\n", numeros[i]);
        }
    }
}