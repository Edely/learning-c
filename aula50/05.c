#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

void atribui(struct ponto *p){
    (*p).x = 10;
    (*p).y = 20;
}

void atribui(struct ponto *p){
    p->x = 10;
    p->y = 20;
}


int main(){
    /* Podemos ainda usar o operador SETA 
    '->' para acessar um campo de uma
    estrutura passada por referência */

    system("pause");
    return 0;
}