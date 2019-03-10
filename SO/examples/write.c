#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <fcntl.h>

int main(int argc, char *argv[]){

    mode_t mode_creation = S_IRUSR |S_IWUSR | S_IROTH;

    int fd_origin, fd_target, c_fd_target, buffer_read, size;
    char *buffer = (char *) malloc(100 * sizeof(char)); 
    
    fd_origin = open(argv[1], O_RDONLY);
    if(fd_origin < 0){
        printf("Não foi possível abrir o arquivo original\n");
        exit(1);
    }

    c_fd_target = creat(argv[2], mode_creation);

    fd_target = open(argv[2], O_RDWR);
    if(fd_target < 0){
        printf("Não foi possível abrir o arquivo de destino\n");
        exit(1);
    }

    while(1){
        buffer_read = read(fd_origin, buffer, 10);
        
        if(buffer_read > 0){
            size = write(fd_target, buffer, buffer_read);
        }
        else if (buffer_read == 0){ /* EOF reached. */
            printf("fim do buffer\n");
            break;
        }   
        else 
            printf("erro\n");
    }

    close(fd_origin);
    close(fd_target);
    return 0;
}