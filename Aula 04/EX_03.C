#include <stdio.h>

int main() {
    int valores[12];
    int i;
    int crescente = 0;
    int decrescente = 0;

    printf("Digite 12 valores inteiros:\n");

    for (i = 0; i < 12; i++) {
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 11; i++) {
        if (valores[i] < valores[i + 1]) {
            crescente = 1; 
        }
        if (valores[i] > valores[i + 1]) {
            decrescente = 1;
        }
    }

    if (crescente == 1 && decrescente == 0) {
        printf("Ordem crescente\n");
    } 
    else if (decrescente == 1 && crescente == 0) {
        printf("Ordem decrescente\n");
    } 
    else {
        printf("Ordem desordenada\n");
    }

   
}