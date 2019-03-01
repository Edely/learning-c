#include <stdio.h>
#include <stdlib.h>
int main(){
    /* funcao: free(): sempre que alocamos
    memória é necessário liberá-la quando
    ela não for mais necessária */
    int *p = (int*) malloc(5 * sizeof(int));
    p = remalloc(p, 15 * sizeof(int));
    if(p == NULL){
        printf("Erro: Sem Memoria!\n");
        exit(1); //termina o programa
    } 
        
    //Libera a memória alocada
    free(p);

    system("pause");
    return 0;
}