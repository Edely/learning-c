#include <stdio.h>
#include <stdlib.h>
int main(){
    /*  Funcionamento:
    a função realloc() recebe por parâmetro
    - ponteiro para um bloco de memória já alocado
    - a quantidade de bytes a ser alocada.
    e retorna
    - NULL: no caso de erro;
    - ponteiro para a primeira posição do array. */

    //Exemplo:
    //Cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(200);
    /* Aumenta a memória alocada para
    100 inteiros (400 bytes) */
    v = (int*) realloc(v, 400);
        
    system("pause");
    return 0;
}