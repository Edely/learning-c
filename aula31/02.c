#include <stdio.h>
#include <stdlib.h>

int main(){
    //Lendo e escrevendo uma string
    char palavra[20];
    printf("digite uma palavra: ");
    scanf("%s", palavra);
    //gets(palavra);
    printf("Palavra lida %s\n", palavra);

    system("pause");
    return 0;
}