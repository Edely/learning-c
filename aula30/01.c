#include <stdio.h>
#include <stdlib.h>

int main(){
    //Maior elemento de um array
    int lista[5] = {3, 18, 2, 51, 45};

    int i, atual, maior;
    for(i = 0; i < 5; i++){
        atual = lista[i];
        if(i == 0)
            maior = lista[i];
        if(atual > maior){
            maior = atual;
        }
    }
    printf("%i eh o maior numero\n", maior);

    system("pause");
    return 0;
}