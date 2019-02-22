#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Uma estrutura também é um tipo de dado. Logo, uma estrutura pode possuir uma variável de tipo de outra estrutura previamente definida. A isso chamamos de ESTRUTURAS ANINHADAS */

    // Forma Feral
    struct nome_struct1{
        ...
    };

    struct nome_struct2{
        ...
        struct nome_struct1 nome;
    };

    system("pause");
    return 0;
}
