#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*
    A linguagem C nos permite criar nosso próprios tipos de variáveis.
    Além da struct, podemos criar uma union também chamada de UNIÃO
    */
    //Forma Geral:
    union nome_union{
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
    };    

    system("pause");
    return 0;
}
