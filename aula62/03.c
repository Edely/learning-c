#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Na alocação da memória, deve-se
    levar em conta o tamanho do tipo */
    //Exemplo: criar um array de tamanho 50
    //Cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(200);
    char *c = (char*) malloc(200);
    //Solução: usar sizeof()
    int *v = (int*) malloc(50 * sizeof(int));
    int *c = (char*) malloc(50 * sizeof(char));
        
    system("pause");
    return 0;
}