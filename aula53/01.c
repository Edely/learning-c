#include <stdio.h>
#include <stdlib.h>
int fatorial(n){
    if(n == 0) //creitério de parada
        return 1;
    else // parâmetro da chamada recursiva
        return n * fatorial(n-1);
}
int main(){
    /* Durante a implementação de
    uma função recursiva temos
    que ter em mente duas coisas: 
    - critério de parada - determina qd a função deve parar de chamar a si própria
    - parâmetro da chamada recursiva - devemos sempre mudar o valor do parâmetro passado, de forma que a recursão chegue a um término.
    */    

    system("pause");
    return 0;
}