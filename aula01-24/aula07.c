#include <stdio.h>
#include <stdlib.h>
int main(){

    
    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;
    /*
    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;

    printf("x1 = %d \n", x1);
    printf("ch1 = %c (%d)\n", ch1, ch1);
    printf("f1 = %f \n", f1);    
    */

    x1 = x2 - x3;
    f1 = -f2;

    
    printf("x1 = %d \n", x1);
    printf("f1 = %f \n", f1);    
    
    system("pause");
    return 0;
}