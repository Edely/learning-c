#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union tipo{
    short int x;
    unsigned char c;
};
int main(){
    // declaracao de uma variavel union
    union tipo u;    

    /* cada campo (varíavel) da union pode ser acessado usando o operador de "." (ponto) */
    u.x = 5;
    u.c = 'a';

    system("pause");
    return 0;
}
