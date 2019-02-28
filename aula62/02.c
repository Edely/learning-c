#include <stdio.h>
#include <stdlib.h>
int main(){
    /*  Funcionamento:
    a função malloc() recebe por parâmetro
    - a quantidade de bytes a ser alocada
    e retorna
    - NULL: no caso de erro;
    - ponteiro para a primeira posição do array. */

    //Exemplo:
    //Cria array de 50 inteiros (200 bytes)
    int *v = malloc(200);
    //Cria array de 200 char (200 bytes)
    char *c = malloc(200);
        
    system("pause");
    return 0;
}