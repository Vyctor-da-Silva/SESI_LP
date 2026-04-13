#include <stdio.h>
int main() {
    int idades[15];
    int i;
    int qtdJovem = 0;
    int qtdAdulto = 0;
    int qtdIdoso = 0;

    printf("Digite as 15 idades:\n");

    for (i = 0; i < 15; i++) {
        scanf("%d", &idades[i]);

        if (idades[i] <= 17) {
            qtdJovem = qtdJovem + 1;
        } 
        else if (idades[i] >= 18 && idades[i] <= 59) {
            qtdAdulto = qtdAdulto + 1;
        } 
        else {
            qtdIdoso = qtdIdoso + 1;
        }
    }

    printf("Total de Jovens: %d\n", qtdJovem);
    printf("Total de Adultos: %d\n", qtdAdulto);
    printf("Total de Idosos: %d\n", qtdIdoso);

    if (qtdJovem > qtdAdulto && qtdJovem > qtdIdoso) {
        printf("O maior grupo e o de Jovens\n");
    }
    if (qtdAdulto > qtdJovem && qtdAdulto > qtdIdoso) {
        printf("O maior grupo e o de Adultos\n");
    }
    if (qtdIdoso > qtdJovem && qtdIdoso > qtdAdulto) {
        printf("O maior grupo e o de Idosos\n");
    }
}
