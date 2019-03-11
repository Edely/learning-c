#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
    if(argc == 1)
        printf("Programa %s sem parametros\n", argv[0]);
    else{
        int soma = 0, i;
        printf("Somando os parametros de %s\n", argv[0]);
        for(i=1; i<argc; i+++)
            soma += atoi(argv[i]);
        //funcao atoi converte string para inteiro
        printf("Soma = %d\n", soma);
    }        
    
    system('pause');
    return 0;
}