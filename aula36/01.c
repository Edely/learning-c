#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    //Inicializando uma estutura
    struct pessoa p;
    strcpy(p.nome, "Edely");
    strcpy(p.rua, "Rua dos Pintassilgos");
    p.idade = 29;
    p.numero = 71;

    system("pause");
    return 0;
}