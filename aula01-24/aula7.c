#include <stdio.h>

int main(){

	int base;
	int altura;
	int area;

	printf("Digite o valor da base: ");
	scanf("%i", &base);

	printf("Digite o valor da altura: ");
	scanf("%i", &altura);

	area = base * altura;

	printf("O valor da area do retangulo de base %i e altura %i eh: %i\n", base, altura, area);


	return 0;
}