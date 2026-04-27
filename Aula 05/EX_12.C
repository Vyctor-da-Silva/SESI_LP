#include <stdio.h>

int main() {
    int v[6];
    int maior, segundo_maior;
    int i;

    printf("Digite 6 numeros:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];
    segundo_maior = v[0];

    for(i = 1; i < 6; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    for(i = 0; i < 6; i++) {
        if(v[i] != maior) {
            if(v[i] > segundo_maior || segundo_maior == maior) {
                segundo_maior = v[i];
            }
        }
    }

    printf("Segundo maior valor: %d\n", segundo_maior);
}
