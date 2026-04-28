#include <stdio.h>

int main() {
    int matriz[4][4];
    int l, c;
    int contador = 0;

    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            printf("Digite valor para l:%d, c:%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++) {
            if(matriz[l][c] > 10) {
                contador++;
            }
        }
    }

    printf("\nQuantidade de numeros maiores que 10: %d\n", contador);
}