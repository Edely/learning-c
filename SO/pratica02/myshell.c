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
    char *token;
    FILE *arq;
    arq = fopen("myscript", "r");
    
    while(fgets(str, 4096, arq)){
        printf("myshell>");
        fflush(stdout);
        printf("%s\n", str);
        fflush(stdout);
        char *palavras[100];
        int npalavras = 0;
        token = strtok(str, " ");
        while( token != NULL ) {
            //printf( "%s\n", token );
            palavras[npalavras] = token;               
            token = strtok(0, " ");
            npalavras++;
        }
        palavras[npalavras] = 0;
        //printf("%d\n", npalavras);
       // printf("aqui -> %s\n", palavras[0]);

        //start, wait, kill, stop, continue, run
        if(strncmp(palavras[0], "wait", 4) == 0){
            printf("comando wait\n");
        }else if(strncmp(palavras[0], "start", 5) == 0){
            printf("comando start\n");
        }else if(strncmp(palavras[0], "kill", 4) == 0){
            printf("comando kill\n");
        }else if(strncmp(palavras[0], "stop", 4) == 0){
            printf("comando stop\n");
        }else if(strncmp(palavras[0], "continue", 8) == 0){
            printf("comando continue\n");
        }else if(strncmp(palavras[0], "run", 3) == 0){
            printf("comando run\n");
        }else{
            printf("comando n existe\n");
        }        
    };

    fclose(arq);    
    return 0;
}