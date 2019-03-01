#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Sempre que terminamos de usar um
    arquivo, devemos fechá-lo. Para realizar
    essa tarefa, usa-se a função fclose() */
    // Forma geral
    int fclose (FILE *f);
    
    /* fclose() retorna ZERO no caso de 
    sucesso no fechamento do arquivo */
    system("pause");
    return 0;
}