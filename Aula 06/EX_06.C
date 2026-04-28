#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior, menor;

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("Digite valor para l:%d, c:%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            if(matriz[l][c] > maior) {
                maior = matriz[l][c];
            }
            if(matriz[l][c] < menor) {
                menor = matriz[l][c];
            }
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}