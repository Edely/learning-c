#include <stdio.h>
#include <stdlib.h>

int main(){

 /*
 copyit ArquivoOrigem ArquivoDestino 


 O programa copyitdeve criar uma cópia de ArquivoOrigemcom o novo nome ArquivoDestino. 
 Após finalizar a cópia, copyit deve informar o número de bytes copiado e finalizar sem erros. 
 Por exemplo:copyit: foram copiados 35827 bytes do arquivo mata5820181.txt para o arquivo mata5820191.txt
 
 Se a cópia demorar mais que um segundo, então a cada segundo o programa deverá emitir uma mensagem:
 
 copyit: cópia em andamento ...
 copyit: cópia em andamento ...
 copyit: cópia em andamento ...

 Se o programa encontrar qualquer tipo de erro, o mesmo deve pararimediatamente e emitir uma mensagem que declare 
 o nome do programa, a operação que falhou e a razão da falha, terminando o programa com código de retorno 1. 
 
 Por exemplo:

 copyit: Não pode abrir o arquivo mata5820181.txt: Permissão negada
 copyit: Não pode escrever o arquivo mata5820191.txt: Disco cheio

 Se o programa é invocado incorretamente, então o mesmo deve abortar imediatamente e exibir uma mensagem de 
 ajuda para o usuário, por exemplo:
 
 copyit: Número incorreto de argumentosuse: copyit ArquivoOrigem ArquivoDestino



Por fim, após as checagens de erro, o programa deve ser algo similar a:

configure as mensagens periódicas
abra o arquivo origem ou finalize com um erro
crie o arquivo destino ou finalize com um erro
    repita{
            leia uma certa quantidade de dados do arquivo origem
            se a leitura foi interrompida, tente novamente
            se existiu um erro de leitura, finalize com um erro
            se não existem mais dados, finalize o loop
            escreva uma certa quantidade de dados no arquivo destino
            se a escrita foi interrompida, tente novamente
            se nem todos os dados foram escritos, finalize com um erro
        }
    feche ambos os arquivos
    Imprima a mensagem de finalização bem-sucedida

 */

 system("pause");
 return 0;
}