#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main(){

    FILE *arq;
    arq = fopen("struct.txt", "wb");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad = {"Andre", "Rua 1", 31};
    fwrite(cad, sizeof(struct cadastro), 1, arq);
    fclose(arq);
    system("pause");
    return 0;
}