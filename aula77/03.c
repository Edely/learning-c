#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[20] = "Ricardo";
    int i = 31;
    float a = 1.74;
    FILE *arq = fopen("arquivo.txt", "w");
    
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    printf("Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);
    fprintf(arq, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);

    fclose(arq);    
    system("pause");
    return 0;
}