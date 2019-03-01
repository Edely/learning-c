#include <stdio.h>
#include <stdlib.h>
int main(){
    //Exemplos
    FILE *f;
    f = fopen("C:\\Users\\Edely\\Workspace\\teste.txt", "w");
    if(f == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        return(1);
    }
    /* Fechar o arquivo garante que tods
    os dados foram realmente gravados */
    fclose(f);
    system("pause");
    return 0;
}