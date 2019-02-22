#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    // Atribuicao entre estruturas
    struct pessoa p = {"Edely", "Rua dos Pintassilgos", 29, 71};
    struct pessoa p2;
    
    /* Estruturas suportam atribuição, desde que sejam do mesmo tipo */
    p2 = p;

    system("pause");
    return 0;
}