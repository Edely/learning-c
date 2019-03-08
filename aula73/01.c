#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Para se escrever uma string em
    um arquivo usamos a função fputs()*/
    // Forma Geral
    int fputs(char *str, FILE *fp);
    /* retorna 
    - Em caso de erro: a constante EOF
    - Em caso de sucesso: uma valor diferente 
    de ZERO*/

    system("pause");
    return(0);
}