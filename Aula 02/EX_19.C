/*
Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50
*/
#include <stdio.h>

int main() {
    float peso;
    float frete;

    // Entrada do peso
    printf("Digite o peso da encomenda (kg): ");
    scanf("%f", &peso);

    // Cálculo do frete
    if (peso <= 5.0) {
        frete = 10.0;
    } else if (peso <= 20.0) {
        frete = 20.0;
    } else {
        frete = 50.0;
    }

    // Saída
    printf("Valor do frete: R$ %.2f\n", frete);

}