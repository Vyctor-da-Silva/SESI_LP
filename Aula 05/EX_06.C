#include <stdio.h>

int main() {
    float numeros[10];
    int positivos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            positivos++;
        }
    }

    printf("Quantidade de números positivos: %d\n", positivos);
}