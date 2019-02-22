#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main(){

    /*
    int nro = 10;
    const int nro = 10;
    printf("Constante %d \n", nro);

    // nro = 12; ERROOOO
    */

    float f = PI + 1;
    printf("PI = %f \n", PI);
    PI = 12.4;

    system("pause");
    return 0;
}