/*
Leia um número inteiro e informe se ele é par ou ímpar.
*/

#include <stdio.h>

int main() {
	int num;
	int resto;

	printf("Digite um numero:");
	scanf("%i", &num);

	resto =  (num%2);

	if(resto == 0) {
		printf("O numero e par");
	} else {
		printf("O numero e impar");
	}

}