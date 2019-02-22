#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU"; // precisa ter uma posicao a mais para \0 
    int i, j, total = 0;

    for(i = 0; i < strlen(str); i++){
        for (j = 0; j < strlen(vogais); j++) {
            if(str[i] == vogais[j]){
                total++;
                break;
            }                
        }
    }

    printf("Nro de vogais = %i\n", total);

    system("pause");
    return 0;
}