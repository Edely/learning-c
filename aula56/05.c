#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Ponteiros podem ser comparados usando: 
    ==, !=, >, <, >=, <= */
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if(p > p1)
        printf("p > p1\n");
    else
        printf("p <= p1\n");
    system("pause");
    return 0;
}