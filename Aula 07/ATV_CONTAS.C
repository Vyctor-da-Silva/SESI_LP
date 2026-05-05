#include <stdio.h>

int somaDeDoisValores(int a, int b){
    return a+b;
}
int multiplicacaoDeDoisValores(int a, int b){
    return a*b;
}
int subtracaoDeDoisValores(int a, int b){
    return a-b;
}
int divisaoDeDoisValores(int a, int b){
    return a/b;
}

void main(){
    int n1, n2;
    int soma=0;
    int mult=0;
    int sub=0;
    int divi=0;
    
    printf("Digite o primeiro valor:");
    scanf("%i", &n1);
    
    printf("\nDigite o segundo valor:");
    scanf("%i", &n2);
    
    soma = somaDeDoisValores(n1, n2);
    
    printf("\nA soma dos dois valores: %i", soma);
    printf("\n 5 + 5 = %i", somaDeDoisValores(5, 5));
    printf("\n 3 + 15 = %i", somaDeDoisValores(3, 15));
    
    mult = multiplicacaoDeDoisValores(n1, n2);

    printf("\nA multiplicaçao dos dois valores: %i", mult);
    
    sub = subtracaoDeDoisValores(n1, n2);
    
    printf("\nA subtracao dos dois valores: %i", sub);
    
    divi = divisaoDeDoisValores(n1, n2);
    
    printf("\nA divisao dos dois valores: %i", divi);
}