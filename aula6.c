#include <stdio.h>

int main(){

	int minhaIdade = 20;
	int maeIdade = 40;
	int paiIdade = 45;
	int	irmaoIdade	= 15;	

	int idadeTotal;

	idadeTotal = minhaIdade * maeIdade / paiIdade + irmaoIdade + 100;

	printf("%i\n", idadeTotal );
	
	return 0;
}