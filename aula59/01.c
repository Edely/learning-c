#include <stdio.h>
#include <stdlib.h>
int main(){
    /* A linguagem C permite criar ponteiros
    com diferentes níveis de apontamento: 
    ponteiros que apontam para outros ponteiros */
    int x = 10;
    int *p = &x;
    int **p2 = &p;
    //Endereço em p2
    printf("p2: %d\n", p2); //&p
    //Conteúdo do endereco
    printf("*p2: %d\n", *p2); //&x
    //Conteúdo do endereco do endereco
    printf("**p2: %d\n", **p2); //x
        
    system("pause");
    return 0;
}