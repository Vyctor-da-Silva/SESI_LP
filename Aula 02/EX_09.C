/*Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/
#include <stdio.h>

int main() {
    float numero;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Verificação
    if (numero > 0) {
        printf("Positivo\n");
    } else if (numero < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }

}