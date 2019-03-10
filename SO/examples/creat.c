#include <fcntl.h>

int main(){
	int fd = creat("arquivo_Sem_permissao.txt", S_IWUSR);
	return 0;
}