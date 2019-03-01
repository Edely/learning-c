#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Se o ponteiro para o bloco de memória
    previamente alocado for NULL, a função
    realloc() irá alocar memória da mesma 
    forma como a função malloc(). */
    int *p;
    //o comando abaixo
    p = (int *) realloc(NULL, 50* sizeof(int));
    //equivale a
    p = (int *) malloc(50 * sizeof(int));
        
    system("pause");
    return 0;
}