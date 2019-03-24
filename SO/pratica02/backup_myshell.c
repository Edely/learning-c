#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int runShell();

int main(){

    runShell();
  
    return 0;
}

int runShell(){

    char str[4096];
    char *palavras[100];
    int i = 0;
    FILE *arq;
    arq = fopen("myscript", "r");
    
    while(1){
        fflush(stdout);
        char *commands = fgets(str, 4096, arq);
        char token;
        if(commands == NULL){
            printf("\nFim do arquivo\n");
            exit(1);
        }            
        else{            
            printf("%d\n", i);
            printf("myshell>");
            printf("%s", str);
        }
        i++;
    };

    fclose(arq);    
    return 0;
}