#include <stdio.h>

int main() {
    float temps[7];
    float soma = 0;
    float media;
    float maior;
    float menor;
    int contador = 0;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura: ");
        scanf("%f", &temps[i]);
    }

    for (i = 0; i < 7; i++) {
        soma = soma + temps[i];
    }
    media = soma / 7;

    maior = temps[0];
    menor = temps[0];

    for (i = 0; i < 7; i++) {
        if (temps[i] > maior) {
            maior = temps[i];
        }
        
        if (temps[i] < menor) {
            menor = temps[i];
        }

        if (temps[i] > media) {
            contador = contador + 1;
        }
    }

    printf("Media: %.1f\n", media);
    printf("Mais quente: %.1f\n", maior);
    printf("Mais frio: %.1f\n", menor);
    printf("Acima da media: %d\n", contador);

}

