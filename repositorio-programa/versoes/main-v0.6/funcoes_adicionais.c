#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "estruturas_dados.h"

/* IMPLEMENTACAO DAS FUNCOES ADICIONAIS */

void limpaTela(){
	system("clear"); //limpa tela no Linux
	//system("cls"); //limpa tela no Windows
}

FILMES *criarVetorFilmes(int tam_vetor){	//somente cria vetores to tipo FILMES
	FILMES *vetor_dinamico_generico;
	vetor_dinamico_generico = malloc(tam_vetor * sizeof(FILMES));

	return vetor_dinamico_generico;
}

BILHETES *criarVetorBilhetes(int tam_vetor){	//somente cria vetores to tipo BILHETES
	BILHETES *vetor_dinamico_generico;
	vetor_dinamico_generico = malloc(tam_vetor * sizeof(FILMES));

	return vetor_dinamico_generico;
}

void desalocarVetorFilmes(FILMES *vetor_dinamico_generico){ 
	//somente desaloca vetores dinamicos do tipo FILMES
	free(vetor_dinamico_generico);
	vetor_dinamico_generico = NULL;
}

void desalocarVetorBilhetes(BILHETES *vetor_dinamico_generico){ 
	//somente desaloca vetores dinamicos do tipo FILMES
	free(vetor_dinamico_generico);
	vetor_dinamico_generico = NULL;
}