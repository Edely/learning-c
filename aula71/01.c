#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    /* Problema: ler um arquivo contendo
    um texto em minúsculo e criar outro
    arquivo com o texto em maiúsculo */

    FILE *f1, *f2;
    f1 = fopen("minusculas.txt", "r");
    f2 = fopen("maiusculas.txt", "w");
    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);
    while(c != EOF){
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);

    system("pause");
    return 0;
}