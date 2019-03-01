#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *f;

    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Falha na leitura\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while(!feof(f)){
        printf("%c", c);
        c = fgetc(f);
    }

    printf("\nFIM\n");
    fclose(f);
    system("pause");
    return 0;
}