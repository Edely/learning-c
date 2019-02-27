#include <stdio.h>
#include <stdlib.h>
int soma(n){
    if(n == 0)
        return 0;
    else{
        return soma(n-1) + n;
    }
}
int main(){
    int resultado;
    resultado = soma(5);

    printf("%d\n", resultado);

    system("pause");
    return 0;
}