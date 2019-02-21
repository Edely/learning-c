#include <stdio.h>
#include <stdlib.h>

int main(){
   //Inicializando uma string
   //Forma convencional
   char nome1[20] = {'j', 'o', 'a', 'o', '\0'};
   printf("nome: %s\n", nome1);
   //Forma especial
   char nome2[20] = "João";
   printf("nome: %s\n", nome2);

    system("pause");
    return 0;
}