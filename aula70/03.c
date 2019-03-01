#include <stdio.h>
#include <stdlib.h>
int main(){
    
    Antes, usamos a função fgetc() para
    ler 10 caracteres de um arquivo.

    Como fazer para ler todos os caracteres?

    Solução: usar a constante EOF (End OF File)
    Quando atingimos o final de um arquivo,
    a função fgetc() devolve a constante EOF
    
    system("pause");
    return 0;
}