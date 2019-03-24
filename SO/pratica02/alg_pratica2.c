/*
- Invocar o programa sem argumentos
- Imprimir prompt quando pronto "myshell>"
- ler uma entrada de linha de comando (vários possíveis parâmetros) (start, wait, kill, stop, continue, run)
    - recuperar PID do processo
    - imprimir msg de sucesso do comando com o PID, ou msg de erro em caso de falha
- após cada comando shell continua sendo impresso
-  O shell deve finalizar com status zero se o comando é quit ou exit ou quando alcançar um end-of-file
- Se o usuário digitar uma linha em branco (i.e., teclar [enter]), simplesmente deverá ser exibido o prompt aceitando uma nova entrada de linha de comando
- Se o usuário digitar qualquer comando não identificado, o shell deverá imprimir uma mensagem de erro legível
- O seu programa shell deve aceitar entradas de linha de comando de até 4096 caracteres e deve manipular até 100 palavras em cada linha de comando.


*/