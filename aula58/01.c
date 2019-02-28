#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Array: conjunto de dados
    armazenados de forma sequeêncial. */
    int vet[5] = {1, 2, 3, 4, 5};
    int i, *p = vet;
    for(i = 0; i< 5; i ++)
        printf("%d\n", p[i]);
        
    system("pause");
    return 0;
}