#include <stdio.h>
#include <stdlib.h>

int main(){
    /* A funcao fputs() não coloca o caracter
    de nova '\n', nem nenhum outro tipo de
    caractere, no final da string escrita. */
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    
    fputs("Hello\n", f);
    fputs("World\n", f);
    //ou
    fputs("Hello", f);
    fputs("\n", f);
    fputs("World", f);
    fclose(f);

    system("pause");
    return(0);
}