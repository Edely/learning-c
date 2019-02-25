#include <stdio.h>
#include <stdlib.h>

void somaValor(int n){
    n = n + 1;
}

void somaReferencia(int *n){
    *n = *n + 1;
}

int main(){
    int x = 5;
    somaValor(x);
    printf("Depois da funcao: x = %d\n", x);
    int y = 5;
    somaReferencia(&y);
    printf("Depois da funcao: y = %d\n", y);

    system("pause");
    return 0;
}
