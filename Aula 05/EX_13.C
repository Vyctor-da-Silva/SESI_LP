#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int mais_frequente = vetor[0];
    int maior_contagem = 0;


    for (int i = 0; i < n; i++) {
        int contagem = 0;

        for (int j = 0; j < n; j++) {
            if (vetor[i] == vetor[j]) {
                contagem++;
            }
        }

        if (contagem > maior_contagem) {
            maior_contagem = contagem;
            mais_frequente = vetor[i];
        }
    }

    printf("Número que mais se repete: %d\n", mais_frequente);

}
