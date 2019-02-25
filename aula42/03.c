#include <stdio.h>
#include <stdlib.h>
typedef unsigned int positivos[5];
int main(){
    /*  O comando tpedef deve ser usado com cuidado pois ele pode produzir declarações confusas. No caso, "positivos" é um sinônimo para "array de 5 inteiros positivos" */
    positivos v = {10, 20, 30, 40, 50};    
    int i;
    for ( i = 0; i < 5; i++)
        printf("v[%d]: %d\n", i, v[i]);

    system("pause");
    return 0;
}