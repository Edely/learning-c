#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Na alocação da memória, deve-se
    levar em conta o tamanho do tipo */
    //Exemplo: criar um array de tamanho 50
    int *v = (int*) calloc(50, 4);
    char *c = (char*) calloc(50, 1);
    //Solução: usar sizeof()
    int *v = (int*) calloc(50, sizeof(int));
    char *c = (char*) calloc(50, sizeof(char));
        
    system("pause");
    return 0;
}