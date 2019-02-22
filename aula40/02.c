#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /* Por que usar uma union?
    2) manipulação de bits: uma union permite fazer acessos controlados a nivel de bits.
    Exemplo sem union: */
    short int x = 1545; //00000110 00001001
    unsigned char c0, c1;
    c0 = 0x00FF & x; // 00001001 -> 9
    c1 = x >> 8; //00000110 -> 6
    
    printf("x = %d\n", x);
    printf("c0 = %d\n", c0);
    printf("c1 = %d\n", c1);

    system("pause");
    return 0;
}