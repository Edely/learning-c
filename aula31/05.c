#include <stdio.h>
#include <stdlib.h>
/* A função do '\0' é desconsiderar as posições restantes da string */

int main(){  
    char palavra[20] = "Oitenta";
    printf("palavra: %s\n", palavra);
    palavra[2] = '\0';
    printf("palavra: %s\n", palavra);

    system("pause");
    return 0;
}