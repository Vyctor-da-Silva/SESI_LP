#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media = 0;
    int acimaDaMedia = 0;


    printf("Digite as notas dos 10 alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; 
    }

    media = soma / 10;

    printf("\n--- Resultados ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Notas acima da media:\n");

   
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("%.2f ", notas[i]);
            acimaDaMedia++;
        }
    }

    printf("\n\nTotal de alunos acima da media: %d\n", acimaDaMedia);

}