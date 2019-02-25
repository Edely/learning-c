#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Exemplo de Passagem "Por Referência":
    função scanf() */

    int x = 5;
    printf("Antes do scanf: x = %d\n", x);
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Depois do scanf: x = %d\n", x);

    system("pause");
    return 0;
}
