#include <stdio.h>
#include <stdlib.h>
int main(){
    /* O nome de abertura determina que tipo
    de uso será feito do arquivo */
    FILE *f;
    //Leitura de Arquivo de Texto    
    f = fopen("..\\Workspace\\teste.txt", "r");
    //Escrita de Arquivo de Texto    
    f = fopen("..\\Workspace\\teste.txt", "w");
    //Leitura de Arquivo de Binário    
    f = fopen("..\\Workspace\\teste.txt", "rb");
    //Escrita de Arquivo de Binário
    f = fopen("..\\Workspace\\teste.txt", "wb");

    system("pause");
    return 0;
}