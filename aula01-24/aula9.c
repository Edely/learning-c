#include <stdio.h>
#include <stdlib.h>

int main(){

	int x = 10, y = 10;

    y = ++x; // x++; y = x; -> x == 11; y ==11
    //y = x++; // y = x; x++; -> y == 10 x == 11
    //x++; //x = x + 1
    //++y; //y = y + 1

    printf("x = %d \n", x);
    printf("x = %d \n", y);

    system("pause");
	return 0;
}