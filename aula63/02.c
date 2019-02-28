#include <stdio.h>
#include <stdlib.h>
int main(){
    /*  Funcionamento:
    a função calloc() recebe por parâmetro
    - número de elementos no array a ser alocado
    - tamanho de cada elemento do array.
    e retorna
    - NULL: no caso de erro;
    - ponteiro para a primeira posição do array. */

    //Exemplo:
    //Cria array de 50 inteiros (4 bytes cada)
    int *v = (int*) calloc(50, 4);
    //Cria array de 200 char (1 byte cada)
    char *c = (char*) malloc(200);
        
    system("pause");
    return 0;
}