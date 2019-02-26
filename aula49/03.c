#include <stdio.h>
#include <stdlib.h>

void imprime(int *n, int m){
    /* Na função, continuamos usando 
    colchete e índice */
    int i;
    for (i = 0; i < m; i++)
        printf("%d \n", n[i]);
}

int main(){
    /* Na chamada da função, usa-se apenas 
    o nome do array (sem colchete e índice),
    e sem o operador de "&" */
    int v[5] = {1, 2, 3, 4, 5};
    imprime(v, 5);

    system("pause");
    return 0;
}