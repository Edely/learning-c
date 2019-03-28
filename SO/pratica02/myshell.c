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
    while (1){
        printf("\nmyshell>");
        fgets(str, 4096, stdin);
        fflush(stdout);        
        token = strtok(str, " ");

        char *palavras[100];
        int npalavras = 0;  

        while( token != NULL ) {
            palavras[npalavras] = token;
            token = strtok(NULL, " ");
            npalavras++;
        }

        palavras[npalavras] = 0;
        printf("%s palavra[0]\n", palavras[0]);
        printf("%c npalavras\n", npalavras);

        //start, wait, kill, stop, continue, runc        
        char *command[4026];
        int i = 1;
        int j = 0;

        while(palavras[i] != 0){
            command[j] = palavras[i];
            j++;
            i++;
        };

        char *cmd = palavras[1];

        if(strncmp(palavras[0], "wait", 4) == 0){
            printf("comando wait\n");

        }else if(strncmp(palavras[0], "start", 5) == 0){

            // printf("comando start\n");
            if(fork()!=0){
                printf("%s command\n",command[0]);
                printf("%s cmd\n",cmd);

                //execvp(cmd, command);
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

    return 0;
}
