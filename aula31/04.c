#include <stdio.h>
#include <stdlib.h>

int main(){  
   char palavra[20] = "Teste";
   printf("palavra: %s\n", palavra);
   palavra[0] = 'L';
   printf("palavra: %s\n", palavra);

    system("pause");
    return 0;
}