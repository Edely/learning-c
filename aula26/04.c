#include <stdio.h>
#include <stdlib.h>

int main(){
    //Acesso aos elementos: indice
    int mat[3][2], M[3][2];

    scanf("%d", &mat[2][0]); //comando de leitura
    mat[0][0] = 10; //comando de atribuição
    mat[1][1] = mat[0][0] + mat[2][0]; //expressao
    mat = M; //errado
    
    system("pause");
    return 0;
}