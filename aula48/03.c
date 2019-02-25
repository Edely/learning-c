#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Parâmetro por referência: usa-se 
    o operador "*" na frente do nome do
    parâmetro durante a declaração da 
    função */

    //Por Valor
    void soma_mais_um(int n);
    //Por Referência
    void soma_mais_um(int *n);

    system("pause");
    return 0;
}
