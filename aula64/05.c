#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Se o tamanho de memória solicitado for
    igual a zero, realloc irá liberar a memória
    da mesma forma como a função free() */
    int *p = (int*) malloc(50*sizeof(int));
    //o comando abaixo
    p = (int *) realloc(p, 0);
    //equivale a 
    free(p);
        
    system("pause");
    return 0;
}