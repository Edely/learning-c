#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Função fopen(): permite abrir um arquivo 
    em um determinado modeo de leitura ou escrita*/

    //Forma geral
    FILE *fopen(char *nome, char *modo);

    //Exemplo:
    FILE *f;
    f = open("arquivo.txt", "w");

    system("pause");
    return 0;
}