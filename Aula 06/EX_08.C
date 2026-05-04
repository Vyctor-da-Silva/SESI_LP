#include <stdio.h>

int main() {
    int A[4], B[4], C[4];

    printf("Digite os 4 elementos da matriz A:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 4 elementos da matriz B:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &B[i]);
    }

    C[0] = A[0]*B[0] + A[1]*B[2];
    C[1] = A[0]*B[1] + A[1]*B[3];
    C[2] = A[2]*B[0] + A[3]*B[2];
    C[3] = A[2]*B[1] + A[3]*B[3];

    printf("Resultado:\n");
    printf("%d %d\n", C[0], C[1]);
    printf("%d %d\n", C[2], C[3]);
}