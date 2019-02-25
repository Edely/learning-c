#include <stdio.h>
#include <stdlib.h>

void somaValor(int n){
    n = n + 1;
}

void somaReferencia(int *n){
    *n = *n + 1;
}


int main(){
    /* Parâmetro por referência: toda vez
    que a variável for usada, o operador "*"
    deverá ser usado na frente do nome da
    variável */

    system("pause");
    return 0;
}
