#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    printf("A média dos valores é: %.2f\n", media);
}