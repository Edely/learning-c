#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Em um array com mais de uma dimensão, a
    memória é liberada na ordem inversa da alocação
    */
    int **p; //2 "*" = 2 níveis = 2 dimensões
    int i, j, N = 2;
    for(i = 0; i < N; i++){
        free(p[i]);
    }
    free(p);
        
    system("pause");
    return 0;
}