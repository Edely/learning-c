#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Cada posição do array é uma variável*/

    float notas[100], vetor[100];

    scanf("%d", &notas[5]); //comando de leitura
    notas[0] = 10; //comando de atribuição
    notas[1] = notas[5] + notas[0]; //expresao
    notas = vetor; //errado

    system("pause");
    return 0;
}