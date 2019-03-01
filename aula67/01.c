#include <stdio.h>
#include <stdlib.h>
int main(){
    A lgg C trabalha com apenas
    dois tipos de arquivos:
    - arquivos texto: podem ser
    editados no bloco de notas
    - arquivos binários: NÃO podem ser
    editados no bloco de notas

    Arquivo de texto:
    - Os dados são gravados exatamento como 
    seriam impressos na tela
    - Os dados são gravados como caracteres
    de 8 bits utilizando a tabela ASCII
    - para isso, existe uma etapa de 
    "conversão" dos dados

    Problemas com a conversão
    - arquivos maiores
    - leitura e escrita lentas

    Considere um número inteiro com 8 dígitos:

    int n = 12345678; //32 bits na memória;

    NUm arquivo de texto, cada dígito será convertido para
    seu caractere ASCII, ou seja 8 bits por dígito.

    "12345678" // 64 bits no arquivo

    Arquivo binário:

    - Os dados são gravados exatamente como 
    estão organizados na memória do computador
    - Não existe etapa de "conversão" dos dados

    consequentemente:
    - arquivos em geral menore
    - leitura e escrita mais rápidas

    Voltemos ao número inteiro com 8 dígitos;

    int n = 12345678; // 32 bits na memória

    Num arquivo binário, o conteúdo da memória
    será copiado diretamente para o arquivo,
    sem conversão

    12345678; // 32 bits no arquivo (codificado)

    system("pause");
    return 0;
}