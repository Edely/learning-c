#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

void atribui(struct ponto *p){
    (*p).x = 10;
    (*p).y = 20;
}

int main(){
    // Passando uma struct "Por Referência"
    struct ponto p1;
    atribui(&p1);
    printf("Valor d = %d\n", p1.x);
    printf("Valor d = %d\n", p1.y);

    system("pause");
    return 0;
}