#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
}

int main(){
    struct pessoa p1, p2, p3, p4;

    /* A STRUCT é um tipo de dado, e portanto a linguagem C suporta a declaração de um array de estrutura */
    //COM STRUCT E COM ARRAY
    struct pessoa p[4];

    system("pause");
    return 0;
}