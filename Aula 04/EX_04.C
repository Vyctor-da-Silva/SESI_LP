#include <stdio.h>

int main() {
    int numeros[10];
    int i, j;
    int contador;
    int dominante = -1;
    int encontrou = 0;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        contador = 0;
        
        
        for (j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador = contador + 1;
            }
        }

      
        if (contador > 5) {
            dominante = numeros[i];
            encontrou = 1;
        }
    }

    if (encontrou == 1) {
        printf("O valor dominante e: %d\n", dominante);
    } else {
        printf("Nao existe um valor dominante.\n");
    }

}
