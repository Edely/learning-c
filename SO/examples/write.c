#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <fcntl.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main(int argc, char *argv[]){

    mode_t mode_creation = S_IRUSR |S_IWUSR | S_IROTH;

    int fd_origin, fd_target, c_fd_target, buffer_read, size, errnum;
    char *buffer = (char *) malloc(100 * sizeof(char)); 
    char msg_num_files[40];
    
    switch(argc){
        case(1):
            strcpy(msg_num_files, "Nenhum arquivo inserido.");
            break;
        case(2):
            strcpy(msg_num_files, "Apenas um arquivo inserido.");
            break;
        default:
            strcpy(msg_num_files, "Mais do que dois arquivos inseridos.");
    }

    if(argc != 3){
        printf("Programa exige dois arquivos. %s Finalizando programa.\n", msg_num_files);
        exit(1);
    }
    
    fd_origin = open(argv[1], O_RDONLY);
    if(fd_origin < 0){
        errnum = errno;
        printf("Não foi possível abrir o arquivo %s. %s\n", argv[1], strerror(errnum));
        exit(1);
    }

    //c_fd_target = creat(argv[2], mode_creation);
    fd_target = open(argv[2], O_RDWR | O_CREAT, mode_creation);
    if(fd_target < 0){
        errnum = errno;
        printf("Não foi possível abrir o arquivo %s. %s\n", argv[2], strerror(errnum));
        exit(1);
    }

    while(1){
        buffer_read = read(fd_origin, buffer, 10);
        
        if(buffer_read > 0){
            size = write(fd_target, buffer, buffer_read);
        }
        else if (buffer_read == 0){
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