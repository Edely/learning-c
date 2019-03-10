#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 
#include <fcntl.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main(int argc, char *argv[]){

    mode_t mode_creation = S_IRUSR |S_IWUSR | S_IROTH;

    int fd_origin, fd_target, c_fd_target, buffer_read, size, errnum, size_copied;
    char *buffer = (char *) malloc(100 * sizeof(char)); 
    struct stat buff_stat;
    stat(argv[1], &buff_stat);
    
    switch(argc){
        case(3):
            break;
        case(1):
            printf("Programa exige dois arquivos. Finalizando programa. Nenhum arquivo inserido.\n");
            exit(1);
        case(2):
            printf("Programa exige dois arquivos. Finalizando programa. Apenas um arquivo inserido.\n");
            exit(1);
        default:
            printf("Programa exige dois arquivos. Finalizando programa. Mais do que dois arquivos inseridos.\n");
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
            if(size < 0){
                errnum = errno;
                if(errnum == 4){
                    size = write(fd_target, buffer, buffer_read);
                    if(size < 0){
                        errnum = errno;
                        printf("Não foi possível gravar no arquivo %s. %s\n", argv[2], strerror(errnum));
                        exit(1);   
                    }
                }else{
                    printf("Não foi possível gravar no arquivo %s. %s\n", argv[2], strerror(errnum));
                    exit(1); 
                }
            }

        }
        else if (buffer_read == 0){
            printf("%d bytes copiados do arquivo %s para o arquivo %s.\n", (int) buff_stat.st_size, argv[1], argv[2]);
            break;
        }   
        else{
            printf("%s.\n", strerror(errnum));
            exit(1); 
        }
            
    }

    close(fd_origin);
    close(fd_target);
    return 0;
}