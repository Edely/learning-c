#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
    Para receber parâmetros, a função main() adquire a forma acima, onde:

    int argc: valor que indica o número de parâmetros com os quais a função main() foi chamada (argc >= 1)

    char *argv[]: ponteiro para um vetor contendo "argc" strings. Cada string é um dos parâmetros para a main().
    
    argv[0] sempre aponta para o nome do programa
    
    system('pause');
    return 0;
}