#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5], media = 0.7;
    int i;

    for(i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < 5; i++){
        if( notas[i]/10 > media )        
            printf("%f. Parabens. Passou. \n", notas[i]/10);
        else
            printf("%f. Se ferrou, pai. \n", notas[i]/10);
    }
    

    system("pause");
    return 0;
}