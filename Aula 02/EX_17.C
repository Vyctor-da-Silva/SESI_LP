/*
Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)
*/
#include <stdio.h>

int main() {
    float temperatura;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &temperatura);
    if (temperatura < 15.0) {
        printf("Frio\n");
    } else if (temperatura <= 25.0) {
        printf("Agradavel\n");
    } else {
        printf("Quente\n");
    }

}
