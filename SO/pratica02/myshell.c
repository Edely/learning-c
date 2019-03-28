#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
    while (1){
        printf("myshell>");
        fgets(str, 4096, stdin);
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

        //start, wait, kill, stop, continue, runc
        char *command[4026];
        int i = 1;
        int j = 0;

        while(palavras[i] != 0){
            //printf("palavra %s\n",palavras[i]);
            command[j] = palavras[i];
            j++;
            i++;
        };

        //printf("command %s\n", command);

        if(strncmp(palavras[0], "wait", 4) == 0){
            printf("comando wait\n");
        }else if(strncmp(palavras[0], "start", 5) == 0){

            printf("comando start\n");
            if(fork()!=0){
                execvp(palavras[0], command);
                printf("Hello from Child!\n"); 
            }
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
    }

    fclose(arq);    
    return 0;
}