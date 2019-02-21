#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){   
    // Concatenando strings
    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";    
    strcat(palavra1, palavra2);

    printf("palavra= %s\n", palavra1);
    system("pause");
    return 0;
}