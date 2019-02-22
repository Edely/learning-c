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
    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;

    system("pause");
    return 0;
}