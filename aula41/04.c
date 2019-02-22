#include <stdio.h>
#include <stdlib.h>
//definindo uma enumeracao
enum escapes{retrocesso='\b', tabulacao='\t', novalinha='\n'};

int main(){
    /* pode-se atribuir valores da tabela ASCII para enumeracao*/
    enum escapes e = novalinha;

    printf("Teste = %c de %c escrita\n", e, e);
    e = tabulacao;
    printf("Teste = %c de %c escrita\n", e, e);
    system("pause");
    return 0;
}