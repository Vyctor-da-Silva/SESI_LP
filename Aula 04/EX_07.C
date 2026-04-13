#include <stdio.h>

int main() {
    float saques[10];
    float total = 0;
    float maior;
    int contador500 = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor do saque: ");
        scanf("%f", &saques[i]);
    }

    for (i = 0; i < 10; i++) {
        total = total + saques[i];
    }

    maior = saques[0];

    for (i = 0; i < 10; i++) {
        if (saques[i] > maior) {
            maior = saques[i];
        }

        if (saques[i] > 500) {
            contador500 = contador500 + 1;
        }
    }

    printf("Total sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Saques acima de 500: %d\n", contador500);

}
