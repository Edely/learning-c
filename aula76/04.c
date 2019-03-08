#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main(){

    FILE *arq;
    arq = fopen("struct.txt", "rb");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char str[20]; // "Hello World!"
    float x; // 5;
    int v[5]; // {1, 2, 3, 4, 5};
    
    struct cadastro cad; // {"Andre", "Rua 1", 31};
    fread(&cad, sizeof(struct cadastro), 1, arq);
    printf("%s,\n%s\n%d", cad.nome, cad.endereco, cad.idade);    
    fclose(arq);
    system("pause");
    return 0;
}