// O presente relatório tem como objetivo detalhar o funcionamento do programa copyit, desenvolvido no âmbito da disciplina MATA-58 - Sistemas Operacionais - Primeiro Semestre de 2019.

/*

Arquivos de Cabeçalho

Abaixo segue descrição dos arquivos de cabeçalho e sua utilização neste trabalho.

stdio.h - Usada para a impressão de mensagens no terminal utilizando a função printf.
stdlib.h - Utilizada para alocação de memória (malloc) bem como finalização do programa em caso de erro com "exit(1)".
sys/types.h - Utilizada para a definição das permissões arquivo de destino no momento de sua criação.
sys/stat.h - Utilizada para a declaração da função stat, que é usada para obter informações sobre arquivos.
unistd.h - Utilizada para declaração das funções:
    - write - utilizada para escrever buffers de dados em um arquivo.
    - close - utilizada para fechar os arquivos após utilização.
    - alarm - usada para definir um alarme para envio de um sinal
    - read - usada para leitura de dados de arquivos
fcntl.h - Declara a função open (para abertura de arquivos) e suas possíveis flags/modos de abertura.
string.h - Usada para manipulação de strings e declaração da função strerror, responsável por imprimir erros de abertura/leitura de arquivo.
errno.h - Usada para importação e utilização de macros para reportar erros.
signal.h - Usada para definição do signal SIGALRM.


Número de Argumentos

O programa checa se foi inserido o número correto de argumentos (2) com o comando swich

    switch(argc)
    ... 
        case(3)
        ....
    
No caso de excesso ou falta de argumentos, o programa finaliza informando o erro ao usuário.

Alarm 

Para, a cada 60 segundos, informar ao usuário que o programa está realizando uma cópia, foi utilizada uma função recursiva que:
    - Imprime uma mensagem
    - Define um alarm de 60 segundos
    - Cria um sinal e chama a função novamente

Abertura dos Arquivos

Para abertura do arquivo de origem, foi utilizada a função open, com o modo de abertura read only. Em caso de sucesso, o valor retornado pela função é um inteiro positivo - o id do file descriptor relacionado ao arquivo que será copiado. 

    fd_origin = open(argv[1], O_RDONLY);

Já o arquivo de destino foi criado com o modo read and write, bem como O_CREAT, que cria o arquivo caso ele já não exista, com permissão 644
    
    mode_t mode_creation = S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

    ...

    fd_target = open(argv[2], O_RDWR | O_CREAT, mode_creation);

No caso de falha na abertura do arquivo, o programa finaliza sua execução com um erro. Para identificar a falha, checa se o valor retornado por open é um inteiro positivo, caso contrário, o arquivo não foi aberto corretamente, o erro é identificado, reportado e por fim o programa é finalizado.

    if(fd_target < 0){
        errnum = errno;
        printf("Nao foi possivel abrir o arquivo %s. %s\n", argv[2], strerror(errnum));
        exit(1);
    }

Após abertura com sucesso dos dois arquivos, o programa passa a ler os dados do arquivo de origem com a função read.
    
    buffer_read = read(fd_origin, buffer, 10);

O retorno desta função indica sucesso no caso de números positivos não nulos, fim da leitura no caso de zero e erro no caso de números negativos.

A medida que lê os buffers do arquivo de origem, o programa escreve estes dados no arquivo de destino com a função write.

    size = write(fd_target, buffer, buffer_read);

Se esta função retornar um valor negativo, o programa é finalizado com erro.

Tanto a leitura quanto escrita ocorrem dentro de um laço intencionalmente infinito que só é quebrado no caso de erro de leitura ou escrita ou quando o program finaliza com sucesso.

        if(buffer_read > 0){
            ...
        }
        else if (buffer_read == 0){
            ...
            break;
        }   
        else{
            ...
            exit(1); 
        }


        if(size < 0){
            ...
            exit(1);   
        }


Fechamento dos Arquivos

Após a utilização dos arquivos de origem e destino, o programa 'fecha' os arquivos utilizando a função close.

    close(fd_origin);
    close(fd_target);

Finalização do Programa

Se o programa é executado sem ocorrência de erros, ele retorna 0 para sinalizar sucesso.

    return 0;

*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

extern int errno;

void send_message(int segundos){
    printf("copyit: copia em andamento ...\n");
    alarm(60);
    signal(SIGALRM, send_message);
}

int main(int argc, char *argv[]){
    signal(SIGALRM, send_message);
    alarm(60);

    mode_t mode_creation = S_IRUSR | S_IWUSR | S_IROTH;

    int fd_origin, fd_target, c_fd_target, buffer_read, size, errnum, last_alarm;
    char *buffer = (char *) malloc(100 * sizeof(char)); 
    struct stat buff_stat;
    stat(argv[1], &buff_stat);

    alarm(60);
    signal(SIGALRM, send_message);
    
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
        printf("Nao foi possivel abrir o arquivo %s. %s\n", argv[1], strerror(errnum));
        exit(1);
    }

    //c_fd_target = creat(argv[2], mode_creation);
    fd_target = open(argv[2], O_RDWR | O_CREAT, mode_creation);
    if(fd_target < 0){
        errnum = errno;
        printf("Nao foi possivel abrir o arquivo %s. %s\n", argv[2], strerror(errnum));
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
                        printf("Nao foi possivel gravar no arquivo %s. %s\n", argv[2], strerror(errnum));
                        exit(1);   
                    }
                }else{
                    printf("Nao foi possivel gravar no arquivo %s. %s\n", argv[2], strerror(errnum));
                    exit(1); 
                }
            }

        }
        else if (buffer_read == 0){
            printf("%ld bytes copiados do arquivo %s para o arquivo %s.\n", (long int) buff_stat.st_size, argv[1], argv[2]);
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