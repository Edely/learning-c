#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    char texto[20] = "Meu programa em C";
    // Grava toda a string de uma vez
    int retorno = fputs(texto, f);
    if(retorno == EOF)
        printf("Erro na Gravação\n");
    fclose(f);

    system("pause");
    return(0);
}