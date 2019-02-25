#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int *n){
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n", *n);
}

int main(){
    /* Parâmetro por referência: na chamda da
    função é necessário utilizar o operador "&" 
    na frente do nome da variável 
    que será passada por referência */

    int x = 5;
    printf("Antes da funcao: x = %d\n", x);
    soma_mais_um(&x);
    printf("Depois da funcao: x = %d\n", x);

    system("pause");
    return 0;
}
