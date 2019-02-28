#include <stdio.h>
#include <stdlib.h>
int main(){
    /* A notação de colchetes é apenas 
    uma simplificação da aritmética de
    ponteiros com acesso ao conteúdo */
    int vet[5] = {1, 2, 3, 4, 5};
    
    printf("vet[2] %d\n", vet[2]);
    printf("vet[2] %d\n", *(vet+2));
        
    system("pause");
    return 0;
}