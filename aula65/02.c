#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Em um ponteiro para ponteiro, cada
    nível do ponteiro permite criar uma 
    nova dimensão no array */
    //int* -> permite criar um array de int
    //int** -> permite criar um array de int*

    int **p; //2 "*" = 2 níveis = 2 dimensões
    int i, j, N = 2;
    //criar um array de ponteiros (int*)
    p = (int**) malloc(N * sizeof(int *));
    for(i = 0; i < N; i++){
        //criar um array de int
        p[i] = (int*) malloc(N * sizeof(int));
        for(j = 0; j < N; j++){
            //lê a matriz de inteiros
            scanf("%d", &p[i][j]);
        }
    }
        
    system("pause");
    return 0;
}