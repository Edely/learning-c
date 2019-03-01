#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char c;
    int i;
    // Lê o arquivo, um caractere por vez
    for (i = 0; i <= 10; i++) {
        c = fgetc(f);
        printf("%c", c);        
    }
    printf("\nFim\n");
    fclose(f);
    system("pause");
    return 0;
}