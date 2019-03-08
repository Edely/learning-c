#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[20];
    arq = fopen("arquivo.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    /* A função fgets() lê uma string até
    encontrar um caractere de nova linha (\n) 
    ou "tamanho-1" caracteres */
    char *result = fgets(str, 20, arq);
    if(result == NULL)
        printf("Erro na Leitura\n");
    else
        printf("%s", str);
    printf("\n");
    fclose(arq);
    system("pause");
    return 0;
}