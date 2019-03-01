#include <stdio.h>
#include <stdlib.h>
int main(){
    /* CUIDADO: se não houver memória
    suficiente para alocar a memória 
    requisitada, a função realloc() 
    retorna NULL */
    int *p = (int*) malloc(5 * sizeof(int));
    int *p1 = (int*) realloc(p, 15 * sizeof(int));
    if(p1 != NULL){
        p = p1; // realocação deu certo
    }
        
    system("pause");
    return 0;
}