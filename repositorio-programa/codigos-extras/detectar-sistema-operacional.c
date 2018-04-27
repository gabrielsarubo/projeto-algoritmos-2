#include <stdio.h>
#include <stdlib.h>

#if defined (_WIN32) || defined(_WIN64)
    int isWindows = 1;
	#else
		#ifdef __linux
			int isWindows = 0;
		#endif
#endif

int main()
{
	printf("Esta mensagem deve aparecer na tela normalmente!\n\n");
	if (isWindows == 1){
		// se eh windows, limpe a tela
		system("cls");
	}
	else{
		// se nao eh windows, mas eh linux, limpe a tela
		system("clear");
	}

	printf("Esta mensagem deve aparecer em uma tela limpa!\n");
	printf("Independentemente do sistema operacional, Linux ou Windows.\n");
   
   return 0;
}