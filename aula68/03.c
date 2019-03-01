#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Se a função fopen() não conseguir 
    abrir o arquivo, ela irá retornar NULL */
    // Exemplo:
    File *f;
    f = fopen("H:\arquivo.txt", "w");
    if(f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1); //aborta o programa
    }
    system("pause");
    return 0;
}