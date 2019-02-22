#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //scanf("tipos de entrada", variaveis);

    char letra;
    int nro;
    float n;
    double d;
    scanf("%c", &letra);    
    scanf("%f", &n);
    scanf("%lf", &d);


    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("Numero digitado: %d \n", nro);
    
    system("pause");

    return 0;
}