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
    char *token;
    //int i = 0;
    FILE *arq;
    arq = fopen("myscript", "r");
    
    while(1){


        char *commands = fgets(str, 4096, arq);
        char *token;
        if(commands == NULL){
            printf("\nFim do arquivo\n");
            exit(1);
        }            
        else{            
            
            printf("myshell>");
            fflush(stdout);
            printf("%s\n", str);
            fflush(stdout);
            token = strtok(str, " ");
            while( token != NULL ) {
                printf( "%s\n", token );                
                token = strtok(0, " ");
            }
        }
    };

    fclose(arq);    
    return 0;
}