#include <stdio.h>

int main() {
	float n1, n2, n3, media;

	printf("qual a n1:");
	scanf("%f", &n1);

	printf("qual a n2:");
	scanf("%f", &n2);

	printf("qual a n3:");
	scanf("%f", &n3);

	media = ("(%.2f + %.2f + %.2f) / %.2f", (n1 + n2 + n3) / 3);

	printf("sua media %.2f /n :", media);

	if(media >= 7.0) {
		printf("APROVADO");
	} else if(media <= 2.9) {
		printf("REPROVADO");
	} else {
		printf("RECUPERACAO");
	}


}