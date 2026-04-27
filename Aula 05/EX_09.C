#include <stdio.h>

int main() {
    float numeros[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("\nValores após substituição:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\n");
}