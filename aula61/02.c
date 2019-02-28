#include <stdio.h>
#include <stdlib.h>
int main(){
    /* O operador sizeof() retorna o 
    número de bytes necessários para 
    alocar um único elemento de um 
    determinado tipo de dado. */ 
    //Forma geral:
    //sizeof(nome_do_tipo);

    //Exemplo:
    int x = sizeof(int);
    printf("x = %d\n", x);
        
    system("pause");
    return 0;
}