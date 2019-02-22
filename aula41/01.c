#include <stdio.h>
#include <stdlib.h>
//definindo uma enumeracao
enum semana{Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(){
    /*  Linguagem C nos permite também criar nosso próprios tipos de variáveis. Além da struct e daunion, poremos criar uma enum também chamada de ENUMERAÇÃO */
    
    //declaracao de uma variavel enum
    enum semana s;
    
    //atribuindo um valor a variavel
    s = Segunda; //1
    printf("Valor = %d\n", s);

    system("pause");
    return 0;
}