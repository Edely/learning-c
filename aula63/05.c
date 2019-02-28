#include <stdio.h>
#include <stdlib.h>
int main(){
    /* malloc() versus calloc: ambas servem
    para alocar memória, mas calloc() inicializa 
    todos os BITS do espaço alocado co 0's */

    int i, *p, *p1;
    p =  (int*) malloc(5 * sizeof(int));
    p1 =  (int*) calloc(5, sizeof(int));
    printf("Calloc \t\t Malloc\n");
    for(i = 0; i < 5; i++){
        printf("p1[%d]: = %d \t", i, p1[i]);
        printf("p[%d]: = %d\n", i, p[i]);
    }    
        
    free(p);
    free(p1);
    system("pause");
    return 0;
}
