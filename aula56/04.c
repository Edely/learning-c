#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Ponteiros podem ser comparados usando: 
    ==, !=, >, <, >=, <= */
    int *p, *p1, x, y;
    if(p == p1)
        printf("Ponteiros iguais\n");
    else
        printf("Ponteiros diferentes\n");
    system("pause");
    return 0;
}