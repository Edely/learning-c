#include <stdio.h>
#include <stdlib.h>
union tipoU{
    short int x;
    unsigned char c;
};
struct tipoS{
    short int x;
    unsigned char c;
};
int main(){
    /*
    STRUCT vs UNION
    union: espaço para armazenar APENAS o maior elemento - memória compartilhada
    */
    union tipoU v;
    v.x = 5; //97  
    v.c = 'a'; 
    printf("x = %d\n", v.x);
    printf("c = %c\n", v.c);
    
    system("pause");
    return 0;
}