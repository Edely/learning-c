#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[20] = "Hello World";
    char str2[20];

    //str1 = str2; //ERRADO!
    int i;
    for(i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';

    system("pause");
    return 0;
}