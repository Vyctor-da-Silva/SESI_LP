#include <stdio.h>

int main() {
    float numeros[6];
    float menor;

    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    menor = numeros[0];

    for (int i = 1; i < 6; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O menor valor é: %.2f\n", menor);
}