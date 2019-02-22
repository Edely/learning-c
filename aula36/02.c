#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    //Inicializando uma estutura
    /* Podemos definir uma lista de valores para colocar na estrutura (como nos arrays) */
    struct pessoa p = {"Edely", "Rua dos Pintassilgos", 29, 71};

    /* Campos não difinidos são inicializados com zero ou com uma string vazia ("") */
    struct pessoa p = {"Edely", "Rua dos Pintassilgos", 29;

    system("pause");
    return 0;
}