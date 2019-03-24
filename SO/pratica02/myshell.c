#include <stdio.h>
#include <stdlib.h>

int runShell();

int main(){

    runShell();
  
    return 0;
}

int runShell(){

    char str[4096];
    char *palavras[100];
    FILE *arq;
    arq = fopen("myscript", "r");
    char *commands = fgets(str, 4096, arq);



    if(commands == NULL)
        printf("Erro na Leitura\n");
    else{
        printf("myshell>");
        fflush(stdout);
        printf("%s", str);
    }

    
    fclose(arq);    
    return 0;
}