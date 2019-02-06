#include <stdio.h>
#include <stdlib.h>

int main(){

    //atribuicao simplificada

    /* variavel 'operacao=' expressao;
    variavel = variavel "operacao" expressao; */

    int x = 10, y = 10;
    int z = 2;
    x = x + z;
    printf("x = %d\n", x);
    y += z;
    printf("y = %d\n", y);


    system("pause");
    return 0;
}