#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main(){
    /* Uma função pode, inclusive,
    chamar a si própria. A isso 
    chamamos de recursividade */    

    system("pause");
    return 0;
}