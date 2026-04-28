#include <stdio.h>

int main() {
    int matriz[3][3];

    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("\nDigite valor para l:%d, c:%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    printf("\nElementos da diagonal principal:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
}