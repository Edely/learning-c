#include <stdio.h>
#include <stdlib.h>
struct ponto{
    int x, y;
};

void atribui(struct ponto *p){
    (*p).x = 10; // Certo
    *p.x = 10; // Errado!
    *(p.x) = 10; // Errado!
}

int main(){
    /* Ao acessar uma estrutura passada
    por referência não podemos esquecer 
    de colocar os parênteses antes de 
    acessar o seu campo */

    system("pause");
    return 0;
}