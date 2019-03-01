#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Vimos nas últimas aulas que a 
    constante EOF ('End of File') 
    indica o fim de um arquivo */
    
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(f);
    }
    printf("\nFim\n");

    system("pause");
    return 0;
}