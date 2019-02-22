#include <stdio.h>
#include <stdlib.h>

//definindo uma estrutura
struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    /* Cada campo (variável) da struct pode ser acessada usando o operador "." (ponto)*/
    struct pessoa p; // declaração de uma variável struct
    p.idade = 29; // comando de atribuicao
    scanf("%d", &p.numero); // comando de leitura
    gets(p.nome); // comando de leitura
    p.numero = p.numero + p.idade - 100; //expressao
    
    system("pause");
    return 0;
}