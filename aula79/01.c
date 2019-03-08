#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Em geral, o acesso a um arquivo é 
    quase sempre feito de modo sequêncial. 
    Porém, a lgg C permite realizar 
    operações de leitura e escria randômica 
    usando a função fseek() */
    
    //Forma geral
    int fseek(FILE *fp, long numbytes, int origem);

    /* Parâmetros:
    fp: o ponteiro para o arquivo 
    numbytes: é o total de bytes a ser pulado
        a partir de 'origem'
    Retorno: ZERO em caso de sucesso */

    system("pause");
    return 0;
}
