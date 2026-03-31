/*
Leia dois números inteiros e informe qual é o maior ou se são iguais.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero:");
    scanf("%i", &num1);
    
    printf("Digite o segundo numero:");
    scanf("%i", &num2);
    
    if (num1 > num2) {
        printf("O maior numero é: %i", num1);
    } else if (num2 > num1) {
        printf("O maior numero é: %i", num2);
    } else {
        printf("Os dois numeros são iguais.");
    }

}