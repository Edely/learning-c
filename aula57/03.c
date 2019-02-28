#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Antes de acessar o conteúdo é preciso
    converter o ponteiro genérico para o 
    tipo de ponteiro com o qual se deseja 
    trabalhar */
    void *pp;
    int * p2 = 10;
    pp = &p2; //Endereço de int

    printf("Conteudo: %d\n", pp); //Errado

    printf("Conteudo: %d\n", *(int*)pp); //Correto
    
    system("pause");
    return 0;
}