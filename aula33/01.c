#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20] = "Linguagem C";
    char inverted_str[20];
    int i, j = 0;

    for (i = strlen(str) - 1; i >= 0; i--){
        printf("%c", str[i]);        
        inverted_str[j] = str[i];
        j++;
    }
    printf("\n");    
    inverted_str[j] = '\0';
    printf("%s\n", inverted_str);
    system("pause");
    return 0;
}