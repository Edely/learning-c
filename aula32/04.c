#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){   
    // Copiando uma string
    char palavra[20] = "Linguagem C";
    char novapalavra[30];
    
    strcpy(novapalavra, palavra);
    printf("Copia = %s\n", novapalavra);
    system("pause");
    return 0;
}