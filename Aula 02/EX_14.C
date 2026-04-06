/*
Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)
*/
#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);
    if (nota < 0 || nota > 10) {
        printf("Nota invalida!\n");
    } else {
        if (nota >= 9.0) {
            printf("Conceito: A\n");
        } else if (nota >= 7.0) {
            printf("Conceito: B\n");
        } else if (nota >= 5.0) {
            printf("Conceito: C\n");
        } else {
            printf("Conceito: D\n");
        }
    }

}
