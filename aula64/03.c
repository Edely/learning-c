#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Na alocação da memória, deve-se
    levar em conta o tamanho do tipo */
    //Exemplo: criar um array de tamanho 50
    int *v = (int*) malloc(200);
    v = (int*) realloc(400);
    //Solução: usar sizeof()
    int *v = (int*) malloc(50 * sizeof(int));
    v = (char*) realloc(100 * sizeof(char));
        
    system("pause");
    return 0;
}