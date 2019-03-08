#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    arq = fopen("dados.txt", "rb");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char str[20]; // "Hello World!"
    float x; // 5;
    int v[5]; // {1, 2, 3, 4, 5};
    
    fread(str, sizeof(char), 20, arq);
    fread(&x, sizeof(float), 1, arq);
    fread(v, sizeof(int), 5, arq);
    printf("%s\n%f\n", str, x);
    printf("%d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5]);
    fclose(arq);
    system("pause");
    return 0;
}