#include <string.h>
#include <stdio.h>

int main () {
    char str[4096];
    //const char s = "\t\n";
    char *token;

    while (1){
    
        /* get the first token */       
        printf("myshell>");
        fgets(str, 4096, stdin);
        token = strtok(str, " ");
        //fflush(stdout);
        
        /* walk through other tokens */
        while( token != NULL ) {
            printf("%s\n", token);            
            token = strtok(NULL, " ");
        }
   }
   
   return(0);
}
int runShell(){

    char str[4096];
    char *token;
    int vez = 0;
    while (1){
        printf("\nmyshell>");
        fgets(str, 4096, stdin);
        fflush(stdout);

        char *palavras[100];
        int npalavras = 0;  

        if( vez == 0)
            token = strtok(str, "\t\n");
        else
            token = strtok(0, "\t\n");

        vez++;  
        printf("%s token\n", token);       
    }

    return 0;
}
