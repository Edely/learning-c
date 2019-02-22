#include <stdio.h>
#include <stdlib.h>
//definindo uma enumeracao
enum semana{Domingo=1, Segunda, Terca, Quarta=7, Quinta, Sexta, Sabado};

int main(){
    
    printf("Domingo = %d\n", Domingo); //1
    printf("Segunda = %d\n", Segunda); //2
    printf("Terca = %d\n", Terca); //3
    printf("Quarta = %d\n", Quarta); //7
    printf("Quinta = %d\n", Quinta); //8
    printf("Sexta = %d\n", Sexta); //9
    printf("Sabado = %d\n", Sabado); //10    

    system("pause");
    return 0;
}