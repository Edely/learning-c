#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("arquivo.txt", "r");
    if(f === NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    
    char texto[20], nome[20];
    int id;
    float h;

    fscanf(f, "%s %s", texto, nome);
    printf("%s %s\n", texto, nome);
    fscanf(f, "%s %s", texto, &id);
    printf("%s %d\n", texto, id);
    fscanf(f, "%s %s", texto, &h);
    printf("%s %d\n", texto, h);    

    fclose(f);
    system("pause");
    return 0;
}
