#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Para se ler uma string de um arquivo usamos a função fgets() */
    //Forma geral:
    char * fgets(char *str, int tamamho, FILE *fp);

    /* 
    retorna:
    - Em caso de erro: NULL
    - Em caso de sucesso: um ponteiro para o primeiro caractere de str 
    */

    system("pause");
    return 0;
}