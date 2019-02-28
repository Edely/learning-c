#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Se não houver memória suficiente
    para alocar a memória requisitada,
    a função malloc() retorna NULL */
    int *p = (int*) malloc(5 * sizeof(int));
    if(p == NULL){
        printf("Erro: Sem Memoria!\n");
        exit(1); //termina o programa
    }
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }    
        
    //Libera a memória alocada
    free(p);
    system("pause");
    return 0;
}