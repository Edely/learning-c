#include <stdio.h>
#include <stdlib.h>

//definindo uma estrutura
struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //declaração de variáveis
    char nome[50], rua[50];
    int idade, numero;

    //declaração de uma variável struct
    struct pessoa p;
    
    system("pause");
    return 0;
}