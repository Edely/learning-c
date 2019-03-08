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

    char *result = fgets(str, 12, arq); // lê 11
    if(result == NULL)
        printf("Erro na Leitura\n");
    else
        printf("%s", str);
    printf("\n");
    fclose(arq);
    system("pause");
    return 0;
}