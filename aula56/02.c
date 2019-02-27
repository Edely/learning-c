#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Sobre o valor de endereço
    armazenados por um ponteiro
    podemos apenas somar e subtrair
    valores INTEIROS */
    int *p = 0x5DC; //1500
    printf("p = %d \n", p);
    p++;
    printf("p = %d \n", p); //1504
    p = p + 15;
    printf("p = %d \n", p); //1564
    p = p - 2;
    printf("p = %d \n", p); //1556
    system("pause");
    return 0;
}