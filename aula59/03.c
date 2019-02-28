#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Acessando o conteúdo de um
    ponteiro para ponteiro */

    char letra = 'a';
    char *ptrChar = &letra;
    char **ptrPtrChar = &ptrChar;
    char ***ptrPtr = &ptrPtrChar;
    printf("*ptrChar: %c\n", *ptrChar);
    printf("**ptrPtrChar: %c\n", **ptrPtrChar);
    printf("***ptrPtr: %c\n", ***ptrPtr);
        
    system("pause");
    return 0;
}