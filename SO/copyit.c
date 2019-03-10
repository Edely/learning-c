#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    int original_file = open(argv[1], O_RDONLY);
    int destiny_file = open(argv[2], O_CREAT, S_IWUSR);
    
    if(!(original_file > 0)){
        printf("Aquivo original n abriu\n");
        exit(1);
    }

    if(!(destiny_file > 0)){
        printf("Aquivo de destino n abriu\n");
        exit(1);
    }
    
    close(original_file);
    close(destiny_file);
    return 0;
}