#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    /*  A combinação de arrays e estruturas permite que se manipule de modo muito mais prático várias variáveis de estrutura */

    struct pessoa p[4];
    int i;
    for (i = 0; i < length; i++) {
        gets(p[i].nome);
        scanf("%d", &p[i].idade);
        gets(p[i].rua);
        scanf("%d", &p[i].numero);
        
    }
    system("pause");
    return 0;
}