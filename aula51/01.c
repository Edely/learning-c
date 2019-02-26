#include <stdio.h>
#include <stdlib.h>

void imprime(int n){
    for (i = 1; i <= n; i++)
        printf("Linha %d\n", i);
}

int main(){
    imprime(5);
    printf("Fim do Programa!\n");

    system("pause");
    return 0;
}