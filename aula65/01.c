#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Alocação de arrays multidimensionais:
    Para alocar um array com mais de 1 dimensão
    precisamos utilizar o conceito de 
    "ponteiro para ponteiro" */
    
    // ponteiro (1 nível): cria um vetor
    int *p = (int*) malloc(5*sizeof(int));
    /* ponteiro para ponteiro (2 níveis):
    permite criar uma matriz */
    int **m;

    /* ponteiro para ponteiro para ponteiro 
    (3 níveis): permite criar um array de
    3 dimensões */
    int ***d;
        
    system("pause");
    return 0;
}