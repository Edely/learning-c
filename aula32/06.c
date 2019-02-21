#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){   
    // Concatenando strings
    char palavra1[20] ="Linguagem C";
    char palavra2[20] ="LINGUAGEM C";
    
    if(strcmp(palavra1, palavra2) == 0)
        printf("String iguais\n");
    else
        printf("Strings diferentes\n");

    system("pause");
    return 0;
}