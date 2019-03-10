#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 16

int main(int argc, char *argv[]){

    char buffer_leitura[BUFFER_SIZE];

    int bufferChars;
    int original_file = open(argv[1], O_RDONLY);
    int destiny_file = open(argv[2], O_CREAT, S_IWOTH);
    
    if(!(original_file > 0)){
        printf("Aquivo original n abriu\n");
        exit(1);
    }

    if(!(destiny_file > 0)){
        printf("Aquivo de destino n abriu\n");
        exit(1);
    }

    while (1) {
        /* Normal case --- some number of bytes read. */
        bufferChars = read(original_file, buffer_leitura, BUFFER_SIZE);
        if ( bufferChars > 0) {
            printf("%d\n", bufferChars);
            /* Process the data */
        }
        else if (bufferChars == 0)   /* EOF reached. */
            break;
        else   /* bufferChars < 0 --- read failure. */
            printf("Read failed.");
   }
    
    close(original_file);
    close(destiny_file);
    return 0;
}