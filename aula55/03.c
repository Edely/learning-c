#include <stdio.h>
#include <stdlib.h>
int main(){   
    /* Podemos apontar o ponteiro para uma
    variavel que ja exista no nosso programa 
    
    Para acessar o valor da variável
    apontada por um ponteiro, basta 
    usar o operador asterisco (*). 
    
    O Operador asterisco tb permite 
    modificar o conteúdo da posição
    de memória apontada. */

    int x = 10; //variavel
    int *p; //ponteiro
    //ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    
    *p = 12;    
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);

    system("pause");
    return 0;
}