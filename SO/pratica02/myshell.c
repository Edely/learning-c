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
    
    while(1){
        fflush(stdout);
        char *commands = fgets(str, 4096, arq);
        if(commands == NULL){
            printf("\nFim do arquivo\n");
            exit(1);
        }            
        else{
            printf("myshell>");
            printf("%s", str);
        }
    };

    fclose(arq);    
    return 0;
}