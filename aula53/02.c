#include <stdio.h>
#include <stdlib.h>
int fatorial(n){
    if(n == 0 || n ==1)
        return 1;
    else
        return fibo(n -1)+fibo(n-2);
}
int main(){
    /* Durante a implementação de
    uma função recursiva temos
    que ter em mente duas coisas: 
    - critério de parada - determina qd a função deve parar de chamar a si própria
    - parâmetro da chamada recursiva - devemos sempre mudar o valor do parâmetro passado, de forma que a recursão chegue a um término.

    Algoritmos recursivos tendem a
    necessitar de mais tempo e/ou espaço
    do que algoritmos iterativos
    Exemplo: sequência de Fibonacci
        0, 1, 1, 3, 4, 5, 8, 13, 21, 34, 55, 89...
    */    

    system("pause");
    return 0;
}