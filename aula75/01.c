#include <stdio.h>
#include <stdlib.h>

int main(){

   /* Vimos como é possível escrever e
    ler em arquivos caracteres e 
    sequências de caracteres (strings)

    As funcções de escrita de blocos de bytes 
    permitem escrever dados mais complexos,
    como os tipos int, float, double, array,
    ou mesmo um tipo definido pelo programador,
    como por exemplo, a struct
    
    Elas devem ser utilizaas preferencialmente 
    com arquivos binários */

    /* Para se escrever um bloco de bytes
    em um arquivo usamos a função fwrite() */
    // Forma geral
    int fwrite(void *buffer, int bytes, int count, FILE *fp);

    /* Parâmetros:
    buffer: ponteiro genérico para os dados
    bytes: tamanho, em bytes, de cada unidade
    de dado a ser gravada
    count: total de unidades de dados que devem ser gravadas
    fp: o ponteiro do arquivo */

    /* Retorno: total de unidades de dados gravadas com sucesso */

    system("pause");
    return 0;
}