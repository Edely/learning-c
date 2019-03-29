#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int runShell();

int main(){

    runShell();
  
    return 0;
}

int runShell(){
    while (1){
        char str[4096];
        char *token;
        
        
        fflush(stdout);
        printf("myshell>");
        fflush(stdout);
        fgets(str, 4096, stdin);
        token = strtok(str, " \n");

        char *palavras[100];
        int npalavras = 0;  

        while( token != NULL ) {
            palavras[npalavras] = token;
            token = strtok(NULL, " \n");
            npalavras++;
        }

        palavras[npalavras] = 0;
        
        //start, wait, kill, stop, continue, runc        
        char *command[4026];
        int i = 1;
        int j = 0;

        while(palavras[i] != 0){
            command[j] = palavras[i];
            j++;
            i++;
        };
        command[j] = NULL;

        int m = 0;
        while(command[m] != NULL){
            m++;        
        };

        char *cmd = palavras[1];

        if(strncmp(palavras[0], "wait", 4) == 0){
            wait(0);
        }else if(strncmp(palavras[0], "start", 5) == 0){
            pid_t pid = fork();
            if(pid==0){      
                execvp(cmd, command);
            }else if(pid > 0){
                wait(0);
            }
        }else if(strncmp(palavras[0], "kill", 4) == 0){
            printf("comando kill\n");

        }else if(strncmp(palavras[0], "stop", 4) == 0){
            printf("comando stop\n");

        }else if(strncmp(palavras[0], "continue", 8) == 0){
            printf("comando continue\n");

        }else if(strncmp(palavras[0], "run", 3) == 0){
            pid_t pid = fork();
            if(pid==0){      
                execvp(cmd, command);
            }else if(pid > 0){
                wait(0);
            }
        }else{
            printf("comando n existe\n");
        }        
    }

    return 0;
}
