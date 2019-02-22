#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    /* Acesso aos campos do array struct 
    Em um array de estruturas, o operador de ponto (.) vem depois dos colchetes [] do índice do array
     */

    struct pessoa p[4];
    p[0].idade = 20;
    strcpy(p[1].nome, "Ricardo");
    p[2].numero = p[0].numero - 1;

    system("pause");
    return 0;
}