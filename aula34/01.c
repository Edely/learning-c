#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20] = "Linguagem C";
    int i, j, total = 0;
    int tam1 = strlen(str);
    for(i = 0; i < tam1; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            total++;
        }
    }

    printf("Nro vogais = %d\n", total);

    system("pause");
    return 0;
}
