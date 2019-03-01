#include <stdio.h>
#include <stdlib.h>
int main(){
    /* função realloc():
    serve para alocar ou realocar memória 
    durante a execução do programa.
    Ela faz o pedido de memória ao computador
    e retorna o ponteiro com o endereço 
    do início do espaço de memória alocado. */
    void* realloc(void* ptr, unsigned int num);
        
    system("pause");
    return 0;
}