#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Para o 'nome' do arquivos, podemos usar
    caminho
    - absoluto (endereço completo)
    - relativo (relativo à pasta do programa) */
    
    FILE *f;
    //caminho absoluto
    f = fopen("C:\\Users\\Edely\\Workspace\\teste.txt", "w");

    //caminho relativo
    f = fopen("teste.txt", "w");
    f = fopen("..\\Workspace\\teste.txt", "w");

    system("pause");
    return 0;
}