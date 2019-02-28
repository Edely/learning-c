#include <stdio.h>
#include <stdlib.h>
int main(){
    /* É a quantidade de asteriscos (*) na
    declaração do ponteiro que indica o 
    número de níveis do ponteiro */

    //Variável int
    int x;
    //ponteiro para int (1 nível)
    int *p1;
    //ponteiro para ponteiro de int (2 níveis)
    int **p2;
    //ponteiro para ponteiro para ponteiro de int (3 níveis)
    int **p*3;
        
    system("pause");
    return 0;
}