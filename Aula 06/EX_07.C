#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    for(int l = 0; l < 5; l++) {
        for(int c = 0; c < 5; c++) {
            printf("Digite valor para l:%d, c:%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    for(int l = 0; l < 5; l++) {
        soma += matriz[l][4 - l];
    }

    printf("\nSoma da diagonal secundaria: %d\n", soma);
}