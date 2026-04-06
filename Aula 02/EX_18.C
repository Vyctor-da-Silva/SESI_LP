/*
 Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/
#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0) {
        printf("%d e ano de eleicao.\n", ano);
    } else {
        printf("%d nao e ano de eleicao.\n", ano);
    }

}
