#include <stdio.h>

int main() {
    int matriz[3][3];
    int l, c;
    int soma;

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("Digite valor para l:%d, c:%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    for(l = 0; l < 3; l++) {
        soma = 0;
        for(c = 0; c < 3; c++) {
            soma += matriz[l][c];
        }
        printf("Soma da linha %d: %d\n", l, soma);
    }
}