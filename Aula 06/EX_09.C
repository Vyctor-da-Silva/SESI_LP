#include <stdio.h>

int main() {
    int matriz[5][5];

    printf("Digite os elementos da matriz 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz resultante:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}